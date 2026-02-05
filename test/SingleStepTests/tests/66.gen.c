#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_66, _66_0000) {
    const struct CPU_State initial_cpu = {.pc=0x4fee, .a=0x18, .x=0x3d, .y=0xf2, .sp=0x08, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xd6}, {.addr=0x4fee, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4fef, .a=0x18, .x=0x3d, .y=0xf2, .sp=0x08, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xd6}, {.addr=0x4fee, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4fee, .value=0x66, .type=IO_READ},
        {.addr=0x4fef, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0001) {
    const struct CPU_State initial_cpu = {.pc=0x1002, .a=0x82, .x=0x67, .y=0xbb, .sp=0x04, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x65}, {.addr=0x1002, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1003, .a=0x82, .x=0x67, .y=0xbb, .sp=0x04, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x65}, {.addr=0x1002, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1002, .value=0x66, .type=IO_READ},
        {.addr=0x1003, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0002) {
    const struct CPU_State initial_cpu = {.pc=0xa217, .a=0x84, .x=0x4e, .y=0x2a, .sp=0xdb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x71}, {.addr=0xa217, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa218, .a=0x84, .x=0x4e, .y=0x2a, .sp=0xdb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x71}, {.addr=0xa217, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa217, .value=0x66, .type=IO_READ},
        {.addr=0xa218, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0003) {
    const struct CPU_State initial_cpu = {.pc=0x17ef, .a=0x38, .x=0x27, .y=0x44, .sp=0x31, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0xee}, {.addr=0x17ef, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x17f0, .a=0x38, .x=0x27, .y=0x44, .sp=0x31, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0xee}, {.addr=0x17ef, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x17ef, .value=0x66, .type=IO_READ},
        {.addr=0x17f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0004) {
    const struct CPU_State initial_cpu = {.pc=0x05eb, .a=0x93, .x=0x4a, .y=0x4b, .sp=0xa3, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x004a, .value=0x16}, {.addr=0x05eb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x05ec, .a=0x93, .x=0x4a, .y=0x4b, .sp=0xa3, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x004a, .value=0x16}, {.addr=0x05eb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x05eb, .value=0x66, .type=IO_READ},
        {.addr=0x05ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x004a, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0005) {
    const struct CPU_State initial_cpu = {.pc=0x01b0, .a=0x41, .x=0x13, .y=0xe9, .sp=0x4a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x60}, {.addr=0x01b0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x01b1, .a=0x41, .x=0x13, .y=0xe9, .sp=0x4a, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x60}, {.addr=0x01b0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x01b0, .value=0x66, .type=IO_READ},
        {.addr=0x01b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0006) {
    const struct CPU_State initial_cpu = {.pc=0xd727, .a=0x6a, .x=0x5a, .y=0x09, .sp=0x3c, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x005a, .value=0xd4}, {.addr=0xd727, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd728, .a=0x6a, .x=0x5a, .y=0x09, .sp=0x3c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x005a, .value=0xd4}, {.addr=0xd727, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd727, .value=0x66, .type=IO_READ},
        {.addr=0xd728, .value=DUMMY, .type=IO_READ},
        {.addr=0x005a, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0007) {
    const struct CPU_State initial_cpu = {.pc=0x87f6, .a=0xa3, .x=0x60, .y=0x69, .sp=0xff, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x9d}, {.addr=0x87f6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x87f7, .a=0xa3, .x=0x60, .y=0x69, .sp=0xff, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x9d}, {.addr=0x87f6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x87f6, .value=0x66, .type=IO_READ},
        {.addr=0x87f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0008) {
    const struct CPU_State initial_cpu = {.pc=0x5a47, .a=0x7e, .x=0x31, .y=0x85, .sp=0xe5, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0xe6}, {.addr=0x5a47, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5a48, .a=0x7e, .x=0x31, .y=0x85, .sp=0xe5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0xe6}, {.addr=0x5a47, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5a47, .value=0x66, .type=IO_READ},
        {.addr=0x5a48, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0009) {
    const struct CPU_State initial_cpu = {.pc=0xab3e, .a=0x72, .x=0x4e, .y=0x9a, .sp=0x03, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0xc5}, {.addr=0xab3e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xab3f, .a=0x72, .x=0x4e, .y=0x9a, .sp=0x03, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0xc5}, {.addr=0xab3e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xab3e, .value=0x66, .type=IO_READ},
        {.addr=0xab3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_000A) {
    const struct CPU_State initial_cpu = {.pc=0x566d, .a=0x31, .x=0x62, .y=0x99, .sp=0x34, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0062, .value=0x7f}, {.addr=0x566d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x566e, .a=0x31, .x=0x62, .y=0x99, .sp=0x34, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0062, .value=0x7f}, {.addr=0x566d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x566d, .value=0x66, .type=IO_READ},
        {.addr=0x566e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0062, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_000B) {
    const struct CPU_State initial_cpu = {.pc=0x10be, .a=0x15, .x=0x79, .y=0xba, .sp=0xfa, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0xd2}, {.addr=0x10be, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x10bf, .a=0x15, .x=0x79, .y=0xba, .sp=0xfa, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xd2}, {.addr=0x10be, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x10be, .value=0x66, .type=IO_READ},
        {.addr=0x10bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_000C) {
    const struct CPU_State initial_cpu = {.pc=0xffcc, .a=0xbd, .x=0x43, .y=0xa7, .sp=0x6c, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x89}, {.addr=0xffcc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xffcd, .a=0xbd, .x=0x43, .y=0xa7, .sp=0x6c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x89}, {.addr=0xffcc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xffcc, .value=0x66, .type=IO_READ},
        {.addr=0xffcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_000D) {
    const struct CPU_State initial_cpu = {.pc=0xe25e, .a=0x3f, .x=0x1b, .y=0xb6, .sp=0x5b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x33}, {.addr=0xe25e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe25f, .a=0x3f, .x=0x1b, .y=0xb6, .sp=0x5b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x33}, {.addr=0xe25e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe25e, .value=0x66, .type=IO_READ},
        {.addr=0xe25f, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_000E) {
    const struct CPU_State initial_cpu = {.pc=0x4f3f, .a=0x75, .x=0x15, .y=0xe3, .sp=0x5f, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xac}, {.addr=0x4f3f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4f40, .a=0x75, .x=0x15, .y=0xe3, .sp=0x5f, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xac}, {.addr=0x4f3f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4f3f, .value=0x66, .type=IO_READ},
        {.addr=0x4f40, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_000F) {
    const struct CPU_State initial_cpu = {.pc=0xf709, .a=0x98, .x=0x18, .y=0xac, .sp=0x51, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0xf5}, {.addr=0xf709, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf70a, .a=0x98, .x=0x18, .y=0xac, .sp=0x51, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0xf5}, {.addr=0xf709, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf709, .value=0x66, .type=IO_READ},
        {.addr=0xf70a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0010) {
    const struct CPU_State initial_cpu = {.pc=0xa83c, .a=0x2f, .x=0x81, .y=0x8c, .sp=0xa8, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x12}, {.addr=0xa83c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa83d, .a=0x2f, .x=0x81, .y=0x8c, .sp=0xa8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x12}, {.addr=0xa83c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa83c, .value=0x66, .type=IO_READ},
        {.addr=0xa83d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0011) {
    const struct CPU_State initial_cpu = {.pc=0x22d1, .a=0x52, .x=0x97, .y=0x9d, .sp=0xa3, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x17}, {.addr=0x22d1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x22d2, .a=0x52, .x=0x97, .y=0x9d, .sp=0xa3, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x17}, {.addr=0x22d1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x22d1, .value=0x66, .type=IO_READ},
        {.addr=0x22d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0012) {
    const struct CPU_State initial_cpu = {.pc=0x75f4, .a=0x42, .x=0x55, .y=0x4d, .sp=0xd7, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x74}, {.addr=0x75f4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x75f5, .a=0x42, .x=0x55, .y=0x4d, .sp=0xd7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x74}, {.addr=0x75f4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x75f4, .value=0x66, .type=IO_READ},
        {.addr=0x75f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0013) {
    const struct CPU_State initial_cpu = {.pc=0x0137, .a=0xbf, .x=0x40, .y=0x9a, .sp=0xeb, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x66}, {.addr=0x0140, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0138, .a=0xbf, .x=0x40, .y=0x9a, .sp=0xeb, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x66}, {.addr=0x0140, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0137, .value=0x66, .type=IO_READ},
        {.addr=0x0138, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0014) {
    const struct CPU_State initial_cpu = {.pc=0xf9a0, .a=0x1d, .x=0x53, .y=0x7a, .sp=0x71, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x5e}, {.addr=0xf9a0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf9a1, .a=0x1d, .x=0x53, .y=0x7a, .sp=0x71, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x5e}, {.addr=0xf9a0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf9a0, .value=0x66, .type=IO_READ},
        {.addr=0xf9a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0015) {
    const struct CPU_State initial_cpu = {.pc=0x0565, .a=0x8b, .x=0xcb, .y=0x89, .sp=0x8b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00cb, .value=0xaa}, {.addr=0x0565, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0566, .a=0x8b, .x=0xcb, .y=0x89, .sp=0x8b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00cb, .value=0xaa}, {.addr=0x0565, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0565, .value=0x66, .type=IO_READ},
        {.addr=0x0566, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cb, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0016) {
    const struct CPU_State initial_cpu = {.pc=0x81ba, .a=0xdb, .x=0x66, .y=0x23, .sp=0xac, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x76}, {.addr=0x81ba, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x81bb, .a=0xdb, .x=0x66, .y=0x23, .sp=0xac, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x76}, {.addr=0x81ba, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x81ba, .value=0x66, .type=IO_READ},
        {.addr=0x81bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0017) {
    const struct CPU_State initial_cpu = {.pc=0xf700, .a=0xee, .x=0xef, .y=0xc3, .sp=0x22, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xfe}, {.addr=0xf700, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf701, .a=0xee, .x=0xef, .y=0xc3, .sp=0x22, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xfe}, {.addr=0xf700, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf700, .value=0x66, .type=IO_READ},
        {.addr=0xf701, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0018) {
    const struct CPU_State initial_cpu = {.pc=0x7d73, .a=0x01, .x=0x0a, .y=0xc1, .sp=0x39, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0xef}, {.addr=0x7d73, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7d74, .a=0x01, .x=0x0a, .y=0xc1, .sp=0x39, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0xef}, {.addr=0x7d73, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7d73, .value=0x66, .type=IO_READ},
        {.addr=0x7d74, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0019) {
    const struct CPU_State initial_cpu = {.pc=0x8537, .a=0xe0, .x=0x94, .y=0xe1, .sp=0x5d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xf5}, {.addr=0x8537, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8538, .a=0xe0, .x=0x94, .y=0xe1, .sp=0x5d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xf5}, {.addr=0x8537, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8537, .value=0x66, .type=IO_READ},
        {.addr=0x8538, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_001A) {
    const struct CPU_State initial_cpu = {.pc=0x901f, .a=0x9e, .x=0xbb, .y=0xac, .sp=0x03, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x0f}, {.addr=0x901f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9020, .a=0x9e, .x=0xbb, .y=0xac, .sp=0x03, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x0f}, {.addr=0x901f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x901f, .value=0x66, .type=IO_READ},
        {.addr=0x9020, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_001B) {
    const struct CPU_State initial_cpu = {.pc=0x5464, .a=0x28, .x=0x3f, .y=0x19, .sp=0x06, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0xbe}, {.addr=0x5464, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5465, .a=0x28, .x=0x3f, .y=0x19, .sp=0x06, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xbe}, {.addr=0x5464, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5464, .value=0x66, .type=IO_READ},
        {.addr=0x5465, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_001C) {
    const struct CPU_State initial_cpu = {.pc=0x275f, .a=0x73, .x=0xa8, .y=0x89, .sp=0xef, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0xde}, {.addr=0x275f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2760, .a=0x73, .x=0xa8, .y=0x89, .sp=0xef, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xde}, {.addr=0x275f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x275f, .value=0x66, .type=IO_READ},
        {.addr=0x2760, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_001D) {
    const struct CPU_State initial_cpu = {.pc=0x8553, .a=0xc1, .x=0x79, .y=0x03, .sp=0x09, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0xf1}, {.addr=0x8553, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8554, .a=0xc1, .x=0x79, .y=0x03, .sp=0x09, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0xf1}, {.addr=0x8553, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8553, .value=0x66, .type=IO_READ},
        {.addr=0x8554, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_001E) {
    const struct CPU_State initial_cpu = {.pc=0x0924, .a=0xdf, .x=0x22, .y=0xef, .sp=0x03, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xab}, {.addr=0x0924, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0925, .a=0xdf, .x=0x22, .y=0xef, .sp=0x03, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xab}, {.addr=0x0924, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0924, .value=0x66, .type=IO_READ},
        {.addr=0x0925, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_001F) {
    const struct CPU_State initial_cpu = {.pc=0x941b, .a=0x46, .x=0x91, .y=0x7d, .sp=0x31, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x47}, {.addr=0x941b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x941c, .a=0x46, .x=0x91, .y=0x7d, .sp=0x31, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x47}, {.addr=0x941b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x941b, .value=0x66, .type=IO_READ},
        {.addr=0x941c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0020) {
    const struct CPU_State initial_cpu = {.pc=0xff57, .a=0x06, .x=0xea, .y=0x59, .sp=0xf9, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x80}, {.addr=0xff57, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xff58, .a=0x06, .x=0xea, .y=0x59, .sp=0xf9, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x80}, {.addr=0xff57, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xff57, .value=0x66, .type=IO_READ},
        {.addr=0xff58, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0021) {
    const struct CPU_State initial_cpu = {.pc=0xf2c7, .a=0x8a, .x=0xae, .y=0xe7, .sp=0xe0, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x0e}, {.addr=0xf2c7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf2c8, .a=0x8a, .x=0xae, .y=0xe7, .sp=0xe0, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x0e}, {.addr=0xf2c7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf2c7, .value=0x66, .type=IO_READ},
        {.addr=0xf2c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0022) {
    const struct CPU_State initial_cpu = {.pc=0xe3a0, .a=0x43, .x=0x7b, .y=0xfd, .sp=0x93, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xa1}, {.addr=0xe3a0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe3a1, .a=0x43, .x=0x7b, .y=0xfd, .sp=0x93, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xa1}, {.addr=0xe3a0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe3a0, .value=0x66, .type=IO_READ},
        {.addr=0xe3a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0023) {
    const struct CPU_State initial_cpu = {.pc=0x3cb5, .a=0xaf, .x=0xeb, .y=0x13, .sp=0x79, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x19}, {.addr=0x3cb5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3cb6, .a=0xaf, .x=0xeb, .y=0x13, .sp=0x79, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x19}, {.addr=0x3cb5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3cb5, .value=0x66, .type=IO_READ},
        {.addr=0x3cb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0024) {
    const struct CPU_State initial_cpu = {.pc=0x0641, .a=0x87, .x=0xbd, .y=0xdd, .sp=0xf5, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0x35}, {.addr=0x0641, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0642, .a=0x87, .x=0xbd, .y=0xdd, .sp=0xf5, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0x35}, {.addr=0x0641, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0641, .value=0x66, .type=IO_READ},
        {.addr=0x0642, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0025) {
    const struct CPU_State initial_cpu = {.pc=0xde44, .a=0xc1, .x=0x3c, .y=0x73, .sp=0xae, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x003c, .value=0x91}, {.addr=0xde44, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xde45, .a=0xc1, .x=0x3c, .y=0x73, .sp=0xae, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x003c, .value=0x91}, {.addr=0xde44, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xde44, .value=0x66, .type=IO_READ},
        {.addr=0xde45, .value=DUMMY, .type=IO_READ},
        {.addr=0x003c, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0026) {
    const struct CPU_State initial_cpu = {.pc=0x6464, .a=0x1e, .x=0xef, .y=0x1e, .sp=0x5e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xc6}, {.addr=0x6464, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6465, .a=0x1e, .x=0xef, .y=0x1e, .sp=0x5e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xc6}, {.addr=0x6464, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6464, .value=0x66, .type=IO_READ},
        {.addr=0x6465, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0027) {
    const struct CPU_State initial_cpu = {.pc=0xa990, .a=0xd3, .x=0x1e, .y=0xc7, .sp=0xb4, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x001e, .value=0xeb}, {.addr=0xa990, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa991, .a=0xd3, .x=0x1e, .y=0xc7, .sp=0xb4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x001e, .value=0xeb}, {.addr=0xa990, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa990, .value=0x66, .type=IO_READ},
        {.addr=0xa991, .value=DUMMY, .type=IO_READ},
        {.addr=0x001e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0028) {
    const struct CPU_State initial_cpu = {.pc=0x7a28, .a=0xa8, .x=0xb8, .y=0x3d, .sp=0xcb, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x6b}, {.addr=0x7a28, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7a29, .a=0xa8, .x=0xb8, .y=0x3d, .sp=0xcb, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x6b}, {.addr=0x7a28, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7a28, .value=0x66, .type=IO_READ},
        {.addr=0x7a29, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0029) {
    const struct CPU_State initial_cpu = {.pc=0x88ba, .a=0xca, .x=0x23, .y=0x77, .sp=0x97, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0xc2}, {.addr=0x88ba, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x88bb, .a=0xca, .x=0x23, .y=0x77, .sp=0x97, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0xc2}, {.addr=0x88ba, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x88ba, .value=0x66, .type=IO_READ},
        {.addr=0x88bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_002A) {
    const struct CPU_State initial_cpu = {.pc=0x315f, .a=0x1e, .x=0x43, .y=0x81, .sp=0x74, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xca}, {.addr=0x315f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3160, .a=0x1e, .x=0x43, .y=0x81, .sp=0x74, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xca}, {.addr=0x315f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x315f, .value=0x66, .type=IO_READ},
        {.addr=0x3160, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_002B) {
    const struct CPU_State initial_cpu = {.pc=0x1273, .a=0x4a, .x=0x7a, .y=0x2f, .sp=0x74, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x6a}, {.addr=0x1273, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1274, .a=0x4a, .x=0x7a, .y=0x2f, .sp=0x74, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x6a}, {.addr=0x1273, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1273, .value=0x66, .type=IO_READ},
        {.addr=0x1274, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_002C) {
    const struct CPU_State initial_cpu = {.pc=0x2f49, .a=0x41, .x=0x42, .y=0x1f, .sp=0x0e, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xf7}, {.addr=0x2f49, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2f4a, .a=0x41, .x=0x42, .y=0x1f, .sp=0x0e, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xf7}, {.addr=0x2f49, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2f49, .value=0x66, .type=IO_READ},
        {.addr=0x2f4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_002D) {
    const struct CPU_State initial_cpu = {.pc=0x349c, .a=0xaa, .x=0xd9, .y=0xf6, .sp=0x2d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x74}, {.addr=0x349c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x349d, .a=0xaa, .x=0xd9, .y=0xf6, .sp=0x2d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x74}, {.addr=0x349c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x349c, .value=0x66, .type=IO_READ},
        {.addr=0x349d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_002E) {
    const struct CPU_State initial_cpu = {.pc=0x03b6, .a=0x27, .x=0x55, .y=0x76, .sp=0x0a, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x0c}, {.addr=0x03b6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x03b7, .a=0x27, .x=0x55, .y=0x76, .sp=0x0a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x0c}, {.addr=0x03b6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x03b6, .value=0x66, .type=IO_READ},
        {.addr=0x03b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_002F) {
    const struct CPU_State initial_cpu = {.pc=0x5f44, .a=0x3a, .x=0xbd, .y=0xa1, .sp=0x63, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00bd, .value=0xe9}, {.addr=0x5f44, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5f45, .a=0x3a, .x=0xbd, .y=0xa1, .sp=0x63, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00bd, .value=0xe9}, {.addr=0x5f44, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5f44, .value=0x66, .type=IO_READ},
        {.addr=0x5f45, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bd, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0030) {
    const struct CPU_State initial_cpu = {.pc=0x1738, .a=0x8a, .x=0xd3, .y=0x81, .sp=0x04, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0xd4}, {.addr=0x1738, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1739, .a=0x8a, .x=0xd3, .y=0x81, .sp=0x04, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0xd4}, {.addr=0x1738, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1738, .value=0x66, .type=IO_READ},
        {.addr=0x1739, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0031) {
    const struct CPU_State initial_cpu = {.pc=0x33db, .a=0x97, .x=0x25, .y=0x3d, .sp=0xce, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x89}, {.addr=0x33db, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x33dc, .a=0x97, .x=0x25, .y=0x3d, .sp=0xce, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x89}, {.addr=0x33db, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x33db, .value=0x66, .type=IO_READ},
        {.addr=0x33dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0032) {
    const struct CPU_State initial_cpu = {.pc=0xf83c, .a=0x94, .x=0x2a, .y=0xac, .sp=0x18, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x1e}, {.addr=0xf83c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf83d, .a=0x94, .x=0x2a, .y=0xac, .sp=0x18, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x1e}, {.addr=0xf83c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf83c, .value=0x66, .type=IO_READ},
        {.addr=0xf83d, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0033) {
    const struct CPU_State initial_cpu = {.pc=0x5165, .a=0x8b, .x=0x51, .y=0x18, .sp=0x3c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x92}, {.addr=0x5165, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5166, .a=0x8b, .x=0x51, .y=0x18, .sp=0x3c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x92}, {.addr=0x5165, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5165, .value=0x66, .type=IO_READ},
        {.addr=0x5166, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0034) {
    const struct CPU_State initial_cpu = {.pc=0x3b3c, .a=0xa4, .x=0xbf, .y=0xf6, .sp=0x1c, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x1e}, {.addr=0x3b3c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3b3d, .a=0xa4, .x=0xbf, .y=0xf6, .sp=0x1c, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x1e}, {.addr=0x3b3c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3b3c, .value=0x66, .type=IO_READ},
        {.addr=0x3b3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0035) {
    const struct CPU_State initial_cpu = {.pc=0x73c5, .a=0x8e, .x=0x85, .y=0x54, .sp=0x09, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x0a}, {.addr=0x73c5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x73c6, .a=0x8e, .x=0x85, .y=0x54, .sp=0x09, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x0a}, {.addr=0x73c5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x73c5, .value=0x66, .type=IO_READ},
        {.addr=0x73c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0036) {
    const struct CPU_State initial_cpu = {.pc=0xa151, .a=0x52, .x=0x25, .y=0x87, .sp=0x97, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x3c}, {.addr=0xa151, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa152, .a=0x52, .x=0x25, .y=0x87, .sp=0x97, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x3c}, {.addr=0xa151, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa151, .value=0x66, .type=IO_READ},
        {.addr=0xa152, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0037) {
    const struct CPU_State initial_cpu = {.pc=0x4459, .a=0x6c, .x=0x1c, .y=0xbf, .sp=0x1f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0xd6}, {.addr=0x4459, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x445a, .a=0x6c, .x=0x1c, .y=0xbf, .sp=0x1f, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xd6}, {.addr=0x4459, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4459, .value=0x66, .type=IO_READ},
        {.addr=0x445a, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0038) {
    const struct CPU_State initial_cpu = {.pc=0x0e08, .a=0xa4, .x=0x28, .y=0x94, .sp=0x07, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x98}, {.addr=0x0e08, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0e09, .a=0xa4, .x=0x28, .y=0x94, .sp=0x07, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0x98}, {.addr=0x0e08, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0e08, .value=0x66, .type=IO_READ},
        {.addr=0x0e09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0039) {
    const struct CPU_State initial_cpu = {.pc=0xfbb9, .a=0x77, .x=0xb3, .y=0x0b, .sp=0x34, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x38}, {.addr=0xfbb9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfbba, .a=0x77, .x=0xb3, .y=0x0b, .sp=0x34, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x38}, {.addr=0xfbb9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfbb9, .value=0x66, .type=IO_READ},
        {.addr=0xfbba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_003A) {
    const struct CPU_State initial_cpu = {.pc=0x0182, .a=0x35, .x=0x67, .y=0x81, .sp=0x62, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x2d}, {.addr=0x0182, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0183, .a=0x35, .x=0x67, .y=0x81, .sp=0x62, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x2d}, {.addr=0x0182, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0182, .value=0x66, .type=IO_READ},
        {.addr=0x0183, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_003B) {
    const struct CPU_State initial_cpu = {.pc=0xfce5, .a=0xa1, .x=0x06, .y=0x31, .sp=0x93, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xbd}, {.addr=0xfce5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfce6, .a=0xa1, .x=0x06, .y=0x31, .sp=0x93, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xbd}, {.addr=0xfce5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfce5, .value=0x66, .type=IO_READ},
        {.addr=0xfce6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_003C) {
    const struct CPU_State initial_cpu = {.pc=0x86e7, .a=0x0d, .x=0xfe, .y=0xd2, .sp=0xaa, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xcb}, {.addr=0x86e7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x86e8, .a=0x0d, .x=0xfe, .y=0xd2, .sp=0xaa, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xcb}, {.addr=0x86e7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x86e7, .value=0x66, .type=IO_READ},
        {.addr=0x86e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_003E) {
    const struct CPU_State initial_cpu = {.pc=0xe2bb, .a=0x28, .x=0x80, .y=0xfd, .sp=0xca, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0xb9}, {.addr=0xe2bb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe2bc, .a=0x28, .x=0x80, .y=0xfd, .sp=0xca, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xb9}, {.addr=0xe2bb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe2bb, .value=0x66, .type=IO_READ},
        {.addr=0xe2bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_003F) {
    const struct CPU_State initial_cpu = {.pc=0x09c2, .a=0xc5, .x=0x50, .y=0xfb, .sp=0xdc, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x3a}, {.addr=0x09c2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x09c3, .a=0xc5, .x=0x50, .y=0xfb, .sp=0xdc, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x3a}, {.addr=0x09c2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x09c2, .value=0x66, .type=IO_READ},
        {.addr=0x09c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0040) {
    const struct CPU_State initial_cpu = {.pc=0xbc45, .a=0xc1, .x=0xc4, .y=0xc6, .sp=0xbd, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x59}, {.addr=0xbc45, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbc46, .a=0xc1, .x=0xc4, .y=0xc6, .sp=0xbd, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x59}, {.addr=0xbc45, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbc45, .value=0x66, .type=IO_READ},
        {.addr=0xbc46, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0041) {
    const struct CPU_State initial_cpu = {.pc=0x66d3, .a=0x1c, .x=0x6a, .y=0xdc, .sp=0xb7, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xb7}, {.addr=0x66d3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x66d4, .a=0x1c, .x=0x6a, .y=0xdc, .sp=0xb7, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xb7}, {.addr=0x66d3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x66d3, .value=0x66, .type=IO_READ},
        {.addr=0x66d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0042) {
    const struct CPU_State initial_cpu = {.pc=0x79b9, .a=0xa0, .x=0x73, .y=0x04, .sp=0xb7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x83}, {.addr=0x79b9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x79ba, .a=0xa0, .x=0x73, .y=0x04, .sp=0xb7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0x83}, {.addr=0x79b9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x79b9, .value=0x66, .type=IO_READ},
        {.addr=0x79ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0043) {
    const struct CPU_State initial_cpu = {.pc=0xf3e8, .a=0x35, .x=0x0e, .y=0x74, .sp=0x86, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0xf2}, {.addr=0xf3e8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf3e9, .a=0x35, .x=0x0e, .y=0x74, .sp=0x86, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0xf2}, {.addr=0xf3e8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf3e8, .value=0x66, .type=IO_READ},
        {.addr=0xf3e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0044) {
    const struct CPU_State initial_cpu = {.pc=0x9015, .a=0xad, .x=0xad, .y=0x2a, .sp=0x46, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x94}, {.addr=0x9015, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9016, .a=0xad, .x=0xad, .y=0x2a, .sp=0x46, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x94}, {.addr=0x9015, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9015, .value=0x66, .type=IO_READ},
        {.addr=0x9016, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0045) {
    const struct CPU_State initial_cpu = {.pc=0xbf42, .a=0x7d, .x=0x96, .y=0xb6, .sp=0x3a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0xf2}, {.addr=0xbf42, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbf43, .a=0x7d, .x=0x96, .y=0xb6, .sp=0x3a, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0xf2}, {.addr=0xbf42, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbf42, .value=0x66, .type=IO_READ},
        {.addr=0xbf43, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0046) {
    const struct CPU_State initial_cpu = {.pc=0x6e2c, .a=0x05, .x=0x17, .y=0x37, .sp=0x87, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x51}, {.addr=0x6e2c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6e2d, .a=0x05, .x=0x17, .y=0x37, .sp=0x87, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x51}, {.addr=0x6e2c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6e2c, .value=0x66, .type=IO_READ},
        {.addr=0x6e2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0047) {
    const struct CPU_State initial_cpu = {.pc=0x362e, .a=0xc6, .x=0x94, .y=0x46, .sp=0x73, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0x02}, {.addr=0x362e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x362f, .a=0xc6, .x=0x94, .y=0x46, .sp=0x73, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0x02}, {.addr=0x362e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x362e, .value=0x66, .type=IO_READ},
        {.addr=0x362f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0094, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0048) {
    const struct CPU_State initial_cpu = {.pc=0x8f49, .a=0x68, .x=0x9a, .y=0x4f, .sp=0xa6, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x2e}, {.addr=0x8f49, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8f4a, .a=0x68, .x=0x9a, .y=0x4f, .sp=0xa6, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x2e}, {.addr=0x8f49, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8f49, .value=0x66, .type=IO_READ},
        {.addr=0x8f4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0049) {
    const struct CPU_State initial_cpu = {.pc=0x3f8a, .a=0x4a, .x=0xf9, .y=0x93, .sp=0x82, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x95}, {.addr=0x3f8a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3f8b, .a=0x4a, .x=0xf9, .y=0x93, .sp=0x82, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x95}, {.addr=0x3f8a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3f8a, .value=0x66, .type=IO_READ},
        {.addr=0x3f8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_004A) {
    const struct CPU_State initial_cpu = {.pc=0x16d7, .a=0x2f, .x=0xc9, .y=0x02, .sp=0x56, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x44}, {.addr=0x16d7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x16d8, .a=0x2f, .x=0xc9, .y=0x02, .sp=0x56, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x44}, {.addr=0x16d7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x16d7, .value=0x66, .type=IO_READ},
        {.addr=0x16d8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_004B) {
    const struct CPU_State initial_cpu = {.pc=0x10a9, .a=0xbf, .x=0xd2, .y=0x2b, .sp=0x77, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x29}, {.addr=0x10a9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x10aa, .a=0xbf, .x=0xd2, .y=0x2b, .sp=0x77, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x29}, {.addr=0x10a9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x10a9, .value=0x66, .type=IO_READ},
        {.addr=0x10aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_004C) {
    const struct CPU_State initial_cpu = {.pc=0x2dbe, .a=0x36, .x=0xe6, .y=0xfe, .sp=0x1c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x65}, {.addr=0x2dbe, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2dbf, .a=0x36, .x=0xe6, .y=0xfe, .sp=0x1c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x65}, {.addr=0x2dbe, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2dbe, .value=0x66, .type=IO_READ},
        {.addr=0x2dbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_004D) {
    const struct CPU_State initial_cpu = {.pc=0x33af, .a=0xb9, .x=0x31, .y=0x47, .sp=0x0c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xd3}, {.addr=0x33af, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x33b0, .a=0xb9, .x=0x31, .y=0x47, .sp=0x0c, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xd3}, {.addr=0x33af, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x33af, .value=0x66, .type=IO_READ},
        {.addr=0x33b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_004E) {
    const struct CPU_State initial_cpu = {.pc=0x3a35, .a=0xd2, .x=0x62, .y=0x24, .sp=0xad, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x5a}, {.addr=0x3a35, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3a36, .a=0xd2, .x=0x62, .y=0x24, .sp=0xad, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x5a}, {.addr=0x3a35, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3a35, .value=0x66, .type=IO_READ},
        {.addr=0x3a36, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_004F) {
    const struct CPU_State initial_cpu = {.pc=0x0f4f, .a=0x17, .x=0xa0, .y=0xf3, .sp=0xc4, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xa3}, {.addr=0x0f4f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0f50, .a=0x17, .x=0xa0, .y=0xf3, .sp=0xc4, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xa3}, {.addr=0x0f4f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0f4f, .value=0x66, .type=IO_READ},
        {.addr=0x0f50, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0050) {
    const struct CPU_State initial_cpu = {.pc=0x8c38, .a=0x61, .x=0x6a, .y=0x68, .sp=0x22, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xaa}, {.addr=0x8c38, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8c39, .a=0x61, .x=0x6a, .y=0x68, .sp=0x22, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xaa}, {.addr=0x8c38, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8c38, .value=0x66, .type=IO_READ},
        {.addr=0x8c39, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0051) {
    const struct CPU_State initial_cpu = {.pc=0x4ccf, .a=0x8b, .x=0xd6, .y=0x8d, .sp=0x7f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0xa9}, {.addr=0x4ccf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4cd0, .a=0x8b, .x=0xd6, .y=0x8d, .sp=0x7f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0xa9}, {.addr=0x4ccf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4ccf, .value=0x66, .type=IO_READ},
        {.addr=0x4cd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0052) {
    const struct CPU_State initial_cpu = {.pc=0x4d68, .a=0x59, .x=0x91, .y=0x10, .sp=0x81, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x4c}, {.addr=0x4d68, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4d69, .a=0x59, .x=0x91, .y=0x10, .sp=0x81, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x4c}, {.addr=0x4d68, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4d68, .value=0x66, .type=IO_READ},
        {.addr=0x4d69, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0053) {
    const struct CPU_State initial_cpu = {.pc=0x8a22, .a=0x88, .x=0xb6, .y=0x08, .sp=0x01, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0x44}, {.addr=0x8a22, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8a23, .a=0x88, .x=0xb6, .y=0x08, .sp=0x01, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0x44}, {.addr=0x8a22, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8a22, .value=0x66, .type=IO_READ},
        {.addr=0x8a23, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0054) {
    const struct CPU_State initial_cpu = {.pc=0x2a1c, .a=0x57, .x=0xe5, .y=0x4d, .sp=0x60, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x98}, {.addr=0x2a1c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2a1d, .a=0x57, .x=0xe5, .y=0x4d, .sp=0x60, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x98}, {.addr=0x2a1c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2a1c, .value=0x66, .type=IO_READ},
        {.addr=0x2a1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0055) {
    const struct CPU_State initial_cpu = {.pc=0x073a, .a=0xa9, .x=0xdf, .y=0x9a, .sp=0xce, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0xc5}, {.addr=0x073a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x073b, .a=0xa9, .x=0xdf, .y=0x9a, .sp=0xce, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xc5}, {.addr=0x073a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x073a, .value=0x66, .type=IO_READ},
        {.addr=0x073b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0056) {
    const struct CPU_State initial_cpu = {.pc=0x0beb, .a=0xf1, .x=0xe9, .y=0x64, .sp=0x76, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x77}, {.addr=0x0beb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0bec, .a=0xf1, .x=0xe9, .y=0x64, .sp=0x76, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x77}, {.addr=0x0beb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0beb, .value=0x66, .type=IO_READ},
        {.addr=0x0bec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0057) {
    const struct CPU_State initial_cpu = {.pc=0x66e3, .a=0x8e, .x=0x2d, .y=0xad, .sp=0x0c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xe5}, {.addr=0x66e3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x66e4, .a=0x8e, .x=0x2d, .y=0xad, .sp=0x0c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xe5}, {.addr=0x66e3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x66e3, .value=0x66, .type=IO_READ},
        {.addr=0x66e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0058) {
    const struct CPU_State initial_cpu = {.pc=0x2a9a, .a=0x82, .x=0x17, .y=0x9f, .sp=0xba, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x8f}, {.addr=0x2a9a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2a9b, .a=0x82, .x=0x17, .y=0x9f, .sp=0xba, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x8f}, {.addr=0x2a9a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2a9a, .value=0x66, .type=IO_READ},
        {.addr=0x2a9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0059) {
    const struct CPU_State initial_cpu = {.pc=0xe515, .a=0x8a, .x=0x35, .y=0x8d, .sp=0xac, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xc0}, {.addr=0xe515, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe516, .a=0x8a, .x=0x35, .y=0x8d, .sp=0xac, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xc0}, {.addr=0xe515, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe515, .value=0x66, .type=IO_READ},
        {.addr=0xe516, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_005A) {
    const struct CPU_State initial_cpu = {.pc=0x71b7, .a=0x36, .x=0x10, .y=0xbf, .sp=0x61, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x87}, {.addr=0x71b7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x71b8, .a=0x36, .x=0x10, .y=0xbf, .sp=0x61, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x87}, {.addr=0x71b7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x71b7, .value=0x66, .type=IO_READ},
        {.addr=0x71b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_005B) {
    const struct CPU_State initial_cpu = {.pc=0xf0c6, .a=0x7e, .x=0xe7, .y=0x1c, .sp=0x0c, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xa0}, {.addr=0xf0c6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf0c7, .a=0x7e, .x=0xe7, .y=0x1c, .sp=0x0c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xa0}, {.addr=0xf0c6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf0c6, .value=0x66, .type=IO_READ},
        {.addr=0xf0c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_005C) {
    const struct CPU_State initial_cpu = {.pc=0x5e37, .a=0xd8, .x=0x72, .y=0x3e, .sp=0x4b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0072, .value=0x71}, {.addr=0x5e37, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5e38, .a=0xd8, .x=0x72, .y=0x3e, .sp=0x4b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0072, .value=0x71}, {.addr=0x5e37, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5e37, .value=0x66, .type=IO_READ},
        {.addr=0x5e38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0072, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_005D) {
    const struct CPU_State initial_cpu = {.pc=0x0f87, .a=0xeb, .x=0x0b, .y=0x20, .sp=0x88, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x86}, {.addr=0x0f87, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0f88, .a=0xeb, .x=0x0b, .y=0x20, .sp=0x88, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x86}, {.addr=0x0f87, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0f87, .value=0x66, .type=IO_READ},
        {.addr=0x0f88, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_005E) {
    const struct CPU_State initial_cpu = {.pc=0x971e, .a=0x59, .x=0x36, .y=0x95, .sp=0x82, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x5c}, {.addr=0x971e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x971f, .a=0x59, .x=0x36, .y=0x95, .sp=0x82, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x5c}, {.addr=0x971e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x971e, .value=0x66, .type=IO_READ},
        {.addr=0x971f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_005F) {
    const struct CPU_State initial_cpu = {.pc=0x4643, .a=0x16, .x=0x0e, .y=0x1c, .sp=0x20, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x08}, {.addr=0x4643, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4644, .a=0x16, .x=0x0e, .y=0x1c, .sp=0x20, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0x08}, {.addr=0x4643, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4643, .value=0x66, .type=IO_READ},
        {.addr=0x4644, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0060) {
    const struct CPU_State initial_cpu = {.pc=0x50a4, .a=0x10, .x=0x42, .y=0x78, .sp=0x44, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x48}, {.addr=0x50a4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x50a5, .a=0x10, .x=0x42, .y=0x78, .sp=0x44, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x48}, {.addr=0x50a4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x50a4, .value=0x66, .type=IO_READ},
        {.addr=0x50a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0061) {
    const struct CPU_State initial_cpu = {.pc=0x447b, .a=0x2e, .x=0x8e, .y=0xfe, .sp=0xd2, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0xea}, {.addr=0x447b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x447c, .a=0x2e, .x=0x8e, .y=0xfe, .sp=0xd2, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0xea}, {.addr=0x447b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x447b, .value=0x66, .type=IO_READ},
        {.addr=0x447c, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0062) {
    const struct CPU_State initial_cpu = {.pc=0x1b6a, .a=0xa3, .x=0x63, .y=0x78, .sp=0x01, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0063, .value=0xe7}, {.addr=0x1b6a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1b6b, .a=0xa3, .x=0x63, .y=0x78, .sp=0x01, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0063, .value=0xe7}, {.addr=0x1b6a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1b6a, .value=0x66, .type=IO_READ},
        {.addr=0x1b6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0063, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0063) {
    const struct CPU_State initial_cpu = {.pc=0xa3cc, .a=0xeb, .x=0x8e, .y=0x83, .sp=0xb2, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x05}, {.addr=0xa3cc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa3cd, .a=0xeb, .x=0x8e, .y=0x83, .sp=0xb2, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x05}, {.addr=0xa3cc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa3cc, .value=0x66, .type=IO_READ},
        {.addr=0xa3cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0064) {
    const struct CPU_State initial_cpu = {.pc=0xe685, .a=0x4d, .x=0xdc, .y=0xfc, .sp=0x64, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x79}, {.addr=0xe685, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe686, .a=0x4d, .x=0xdc, .y=0xfc, .sp=0x64, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x79}, {.addr=0xe685, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe685, .value=0x66, .type=IO_READ},
        {.addr=0xe686, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0065) {
    const struct CPU_State initial_cpu = {.pc=0x43f8, .a=0x67, .x=0x3e, .y=0xc2, .sp=0x70, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0xcb}, {.addr=0x43f8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x43f9, .a=0x67, .x=0x3e, .y=0xc2, .sp=0x70, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0xcb}, {.addr=0x43f8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x43f8, .value=0x66, .type=IO_READ},
        {.addr=0x43f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0066) {
    const struct CPU_State initial_cpu = {.pc=0x6283, .a=0xa1, .x=0x5d, .y=0x2f, .sp=0xc4, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0x23}, {.addr=0x6283, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6284, .a=0xa1, .x=0x5d, .y=0x2f, .sp=0xc4, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0x23}, {.addr=0x6283, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6283, .value=0x66, .type=IO_READ},
        {.addr=0x6284, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0067) {
    const struct CPU_State initial_cpu = {.pc=0x6f35, .a=0x2b, .x=0x2a, .y=0xea, .sp=0x7f, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x002a, .value=0x7d}, {.addr=0x6f35, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6f36, .a=0x2b, .x=0x2a, .y=0xea, .sp=0x7f, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x002a, .value=0x7d}, {.addr=0x6f35, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6f35, .value=0x66, .type=IO_READ},
        {.addr=0x6f36, .value=DUMMY, .type=IO_READ},
        {.addr=0x002a, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0069) {
    const struct CPU_State initial_cpu = {.pc=0xd9a8, .a=0xcc, .x=0x3f, .y=0x51, .sp=0xba, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x4e}, {.addr=0xd9a8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd9a9, .a=0xcc, .x=0x3f, .y=0x51, .sp=0xba, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x4e}, {.addr=0xd9a8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd9a8, .value=0x66, .type=IO_READ},
        {.addr=0xd9a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_006A) {
    const struct CPU_State initial_cpu = {.pc=0x22fa, .a=0x6d, .x=0x42, .y=0xa9, .sp=0x78, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xc7}, {.addr=0x22fa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x22fb, .a=0x6d, .x=0x42, .y=0xa9, .sp=0x78, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xc7}, {.addr=0x22fa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x22fa, .value=0x66, .type=IO_READ},
        {.addr=0x22fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_006B) {
    const struct CPU_State initial_cpu = {.pc=0x8c31, .a=0x53, .x=0x18, .y=0x0a, .sp=0xf1, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x95}, {.addr=0x8c31, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8c32, .a=0x53, .x=0x18, .y=0x0a, .sp=0xf1, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x95}, {.addr=0x8c31, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8c31, .value=0x66, .type=IO_READ},
        {.addr=0x8c32, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_006C) {
    const struct CPU_State initial_cpu = {.pc=0xa88e, .a=0xd3, .x=0xf5, .y=0xe6, .sp=0x66, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x06}, {.addr=0xa88e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa88f, .a=0xd3, .x=0xf5, .y=0xe6, .sp=0x66, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x06}, {.addr=0xa88e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa88e, .value=0x66, .type=IO_READ},
        {.addr=0xa88f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_006D) {
    const struct CPU_State initial_cpu = {.pc=0x6855, .a=0xc8, .x=0x13, .y=0x71, .sp=0x43, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x07}, {.addr=0x6855, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6856, .a=0xc8, .x=0x13, .y=0x71, .sp=0x43, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x07}, {.addr=0x6855, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6855, .value=0x66, .type=IO_READ},
        {.addr=0x6856, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_006E) {
    const struct CPU_State initial_cpu = {.pc=0xdbcc, .a=0x63, .x=0x8f, .y=0xf5, .sp=0x60, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x2a}, {.addr=0xdbcc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdbcd, .a=0x63, .x=0x8f, .y=0xf5, .sp=0x60, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x2a}, {.addr=0xdbcc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdbcc, .value=0x66, .type=IO_READ},
        {.addr=0xdbcd, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_006F) {
    const struct CPU_State initial_cpu = {.pc=0xb43a, .a=0xe8, .x=0x49, .y=0x6a, .sp=0xc6, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x72}, {.addr=0xb43a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb43b, .a=0xe8, .x=0x49, .y=0x6a, .sp=0xc6, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x72}, {.addr=0xb43a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb43a, .value=0x66, .type=IO_READ},
        {.addr=0xb43b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0070) {
    const struct CPU_State initial_cpu = {.pc=0xb75a, .a=0x2e, .x=0x7e, .y=0xc7, .sp=0xe7, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0xa1}, {.addr=0xb75a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb75b, .a=0x2e, .x=0x7e, .y=0xc7, .sp=0xe7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0xa1}, {.addr=0xb75a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb75a, .value=0x66, .type=IO_READ},
        {.addr=0xb75b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0072) {
    const struct CPU_State initial_cpu = {.pc=0x799e, .a=0x5f, .x=0xa6, .y=0x0f, .sp=0xc9, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x5b}, {.addr=0x799e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x799f, .a=0x5f, .x=0xa6, .y=0x0f, .sp=0xc9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x5b}, {.addr=0x799e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x799e, .value=0x66, .type=IO_READ},
        {.addr=0x799f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0073) {
    const struct CPU_State initial_cpu = {.pc=0x2808, .a=0x11, .x=0xa3, .y=0xfc, .sp=0x3a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a3, .value=0xf3}, {.addr=0x2808, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2809, .a=0x11, .x=0xa3, .y=0xfc, .sp=0x3a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00a3, .value=0xf3}, {.addr=0x2808, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2808, .value=0x66, .type=IO_READ},
        {.addr=0x2809, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a3, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0074) {
    const struct CPU_State initial_cpu = {.pc=0xdf8a, .a=0x92, .x=0xec, .y=0x55, .sp=0xa7, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x23}, {.addr=0xdf8a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdf8b, .a=0x92, .x=0xec, .y=0x55, .sp=0xa7, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x23}, {.addr=0xdf8a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdf8a, .value=0x66, .type=IO_READ},
        {.addr=0xdf8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0075) {
    const struct CPU_State initial_cpu = {.pc=0x1f47, .a=0xbb, .x=0x7c, .y=0x34, .sp=0x62, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x09}, {.addr=0x1f47, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1f48, .a=0xbb, .x=0x7c, .y=0x34, .sp=0x62, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x09}, {.addr=0x1f47, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1f47, .value=0x66, .type=IO_READ},
        {.addr=0x1f48, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0076) {
    const struct CPU_State initial_cpu = {.pc=0x05ed, .a=0x02, .x=0x3b, .y=0x2d, .sp=0x99, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x6f}, {.addr=0x05ed, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x05ee, .a=0x02, .x=0x3b, .y=0x2d, .sp=0x99, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x6f}, {.addr=0x05ed, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x05ed, .value=0x66, .type=IO_READ},
        {.addr=0x05ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0077) {
    const struct CPU_State initial_cpu = {.pc=0x4385, .a=0xaa, .x=0x6a, .y=0xfc, .sp=0x00, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0x2c}, {.addr=0x4385, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4386, .a=0xaa, .x=0x6a, .y=0xfc, .sp=0x00, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0x2c}, {.addr=0x4385, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4385, .value=0x66, .type=IO_READ},
        {.addr=0x4386, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0078) {
    const struct CPU_State initial_cpu = {.pc=0xe3f0, .a=0x64, .x=0x12, .y=0xcc, .sp=0x02, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x05}, {.addr=0xe3f0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe3f1, .a=0x64, .x=0x12, .y=0xcc, .sp=0x02, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x05}, {.addr=0xe3f0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe3f0, .value=0x66, .type=IO_READ},
        {.addr=0xe3f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0079) {
    const struct CPU_State initial_cpu = {.pc=0xc318, .a=0x6b, .x=0xe5, .y=0x89, .sp=0xca, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x7f}, {.addr=0xc318, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc319, .a=0x6b, .x=0xe5, .y=0x89, .sp=0xca, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x7f}, {.addr=0xc318, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc318, .value=0x66, .type=IO_READ},
        {.addr=0xc319, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_007A) {
    const struct CPU_State initial_cpu = {.pc=0x210d, .a=0xed, .x=0xed, .y=0xfa, .sp=0x4b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x90}, {.addr=0x210d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x210e, .a=0xed, .x=0xed, .y=0xfa, .sp=0x4b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x90}, {.addr=0x210d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x210d, .value=0x66, .type=IO_READ},
        {.addr=0x210e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_007B) {
    const struct CPU_State initial_cpu = {.pc=0x5adf, .a=0x8a, .x=0xc9, .y=0x74, .sp=0x25, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x31}, {.addr=0x5adf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5ae0, .a=0x8a, .x=0xc9, .y=0x74, .sp=0x25, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x31}, {.addr=0x5adf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5adf, .value=0x66, .type=IO_READ},
        {.addr=0x5ae0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_007D) {
    const struct CPU_State initial_cpu = {.pc=0x7fa9, .a=0xdd, .x=0x0c, .y=0xf5, .sp=0x3e, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xab}, {.addr=0x7fa9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7faa, .a=0xdd, .x=0x0c, .y=0xf5, .sp=0x3e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xab}, {.addr=0x7fa9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7fa9, .value=0x66, .type=IO_READ},
        {.addr=0x7faa, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_007E) {
    const struct CPU_State initial_cpu = {.pc=0xdf77, .a=0xcf, .x=0x5e, .y=0xd2, .sp=0xbf, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x005e, .value=0x0e}, {.addr=0xdf77, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdf78, .a=0xcf, .x=0x5e, .y=0xd2, .sp=0xbf, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x005e, .value=0x0e}, {.addr=0xdf77, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdf77, .value=0x66, .type=IO_READ},
        {.addr=0xdf78, .value=DUMMY, .type=IO_READ},
        {.addr=0x005e, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_007F) {
    const struct CPU_State initial_cpu = {.pc=0x4938, .a=0xed, .x=0x6a, .y=0xae, .sp=0x2e, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x76}, {.addr=0x4938, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4939, .a=0xed, .x=0x6a, .y=0xae, .sp=0x2e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x76}, {.addr=0x4938, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4938, .value=0x66, .type=IO_READ},
        {.addr=0x4939, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0080) {
    const struct CPU_State initial_cpu = {.pc=0x04da, .a=0x82, .x=0x21, .y=0x25, .sp=0x97, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x9d}, {.addr=0x04da, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x04db, .a=0x82, .x=0x21, .y=0x25, .sp=0x97, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x9d}, {.addr=0x04da, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x04da, .value=0x66, .type=IO_READ},
        {.addr=0x04db, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0081) {
    const struct CPU_State initial_cpu = {.pc=0xe1da, .a=0x76, .x=0xcf, .y=0x2e, .sp=0x0e, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x2d}, {.addr=0xe1da, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe1db, .a=0x76, .x=0xcf, .y=0x2e, .sp=0x0e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x2d}, {.addr=0xe1da, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe1da, .value=0x66, .type=IO_READ},
        {.addr=0xe1db, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0082) {
    const struct CPU_State initial_cpu = {.pc=0xa03b, .a=0xbc, .x=0xbb, .y=0xbd, .sp=0x39, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x33}, {.addr=0xa03b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa03c, .a=0xbc, .x=0xbb, .y=0xbd, .sp=0x39, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x33}, {.addr=0xa03b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa03b, .value=0x66, .type=IO_READ},
        {.addr=0xa03c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0083) {
    const struct CPU_State initial_cpu = {.pc=0xd755, .a=0xf9, .x=0x74, .y=0x95, .sp=0x06, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x07}, {.addr=0xd755, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd756, .a=0xf9, .x=0x74, .y=0x95, .sp=0x06, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x07}, {.addr=0xd755, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd755, .value=0x66, .type=IO_READ},
        {.addr=0xd756, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0084) {
    const struct CPU_State initial_cpu = {.pc=0x160c, .a=0x93, .x=0x9d, .y=0x10, .sp=0xcb, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x46}, {.addr=0x160c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x160d, .a=0x93, .x=0x9d, .y=0x10, .sp=0xcb, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x46}, {.addr=0x160c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x160c, .value=0x66, .type=IO_READ},
        {.addr=0x160d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0086) {
    const struct CPU_State initial_cpu = {.pc=0x96b0, .a=0x69, .x=0xa9, .y=0x30, .sp=0xa9, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x20}, {.addr=0x96b0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x96b1, .a=0x69, .x=0xa9, .y=0x30, .sp=0xa9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x20}, {.addr=0x96b0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x96b0, .value=0x66, .type=IO_READ},
        {.addr=0x96b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0087) {
    const struct CPU_State initial_cpu = {.pc=0x475b, .a=0x25, .x=0x13, .y=0x4f, .sp=0x46, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x44}, {.addr=0x475b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x475c, .a=0x25, .x=0x13, .y=0x4f, .sp=0x46, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x44}, {.addr=0x475b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x475b, .value=0x66, .type=IO_READ},
        {.addr=0x475c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0088) {
    const struct CPU_State initial_cpu = {.pc=0x5fdf, .a=0x4c, .x=0x6c, .y=0x33, .sp=0x14, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x6f}, {.addr=0x5fdf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5fe0, .a=0x4c, .x=0x6c, .y=0x33, .sp=0x14, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x6f}, {.addr=0x5fdf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5fdf, .value=0x66, .type=IO_READ},
        {.addr=0x5fe0, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0089) {
    const struct CPU_State initial_cpu = {.pc=0x495c, .a=0x8a, .x=0x43, .y=0xb9, .sp=0x64, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x78}, {.addr=0x495c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x495d, .a=0x8a, .x=0x43, .y=0xb9, .sp=0x64, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x78}, {.addr=0x495c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x495c, .value=0x66, .type=IO_READ},
        {.addr=0x495d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_008A) {
    const struct CPU_State initial_cpu = {.pc=0x0c37, .a=0x12, .x=0xe9, .y=0xaa, .sp=0x40, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0xeb}, {.addr=0x0c37, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0c38, .a=0x12, .x=0xe9, .y=0xaa, .sp=0x40, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0xeb}, {.addr=0x0c37, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0c37, .value=0x66, .type=IO_READ},
        {.addr=0x0c38, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_008B) {
    const struct CPU_State initial_cpu = {.pc=0x9026, .a=0x54, .x=0xe1, .y=0x90, .sp=0x63, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0xfa}, {.addr=0x9026, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9027, .a=0x54, .x=0xe1, .y=0x90, .sp=0x63, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0xfa}, {.addr=0x9026, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9026, .value=0x66, .type=IO_READ},
        {.addr=0x9027, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_008C) {
    const struct CPU_State initial_cpu = {.pc=0x39e3, .a=0x9c, .x=0xa8, .y=0x02, .sp=0x9e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0xf7}, {.addr=0x39e3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x39e4, .a=0x9c, .x=0xa8, .y=0x02, .sp=0x9e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xf7}, {.addr=0x39e3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x39e3, .value=0x66, .type=IO_READ},
        {.addr=0x39e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_008D) {
    const struct CPU_State initial_cpu = {.pc=0x3ec8, .a=0xe3, .x=0x25, .y=0xff, .sp=0x62, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x52}, {.addr=0x3ec8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3ec9, .a=0xe3, .x=0x25, .y=0xff, .sp=0x62, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x52}, {.addr=0x3ec8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3ec8, .value=0x66, .type=IO_READ},
        {.addr=0x3ec9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_008E) {
    const struct CPU_State initial_cpu = {.pc=0x06eb, .a=0x72, .x=0x10, .y=0x2d, .sp=0xd4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x2c}, {.addr=0x06eb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x06ec, .a=0x72, .x=0x10, .y=0x2d, .sp=0xd4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x2c}, {.addr=0x06eb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x06eb, .value=0x66, .type=IO_READ},
        {.addr=0x06ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_008F) {
    const struct CPU_State initial_cpu = {.pc=0xfa4a, .a=0x9c, .x=0x13, .y=0x16, .sp=0x2f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x33}, {.addr=0xfa4a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfa4b, .a=0x9c, .x=0x13, .y=0x16, .sp=0x2f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x33}, {.addr=0xfa4a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfa4a, .value=0x66, .type=IO_READ},
        {.addr=0xfa4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0090) {
    const struct CPU_State initial_cpu = {.pc=0x05b1, .a=0xd7, .x=0xfc, .y=0xa5, .sp=0x08, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xa4}, {.addr=0x05b1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x05b2, .a=0xd7, .x=0xfc, .y=0xa5, .sp=0x08, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xa4}, {.addr=0x05b1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x05b1, .value=0x66, .type=IO_READ},
        {.addr=0x05b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0091) {
    const struct CPU_State initial_cpu = {.pc=0x7f44, .a=0xfe, .x=0x6a, .y=0xcf, .sp=0x07, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xd5}, {.addr=0x7f44, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7f45, .a=0xfe, .x=0x6a, .y=0xcf, .sp=0x07, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xd5}, {.addr=0x7f44, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7f44, .value=0x66, .type=IO_READ},
        {.addr=0x7f45, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0092) {
    const struct CPU_State initial_cpu = {.pc=0x7192, .a=0x6d, .x=0x44, .y=0x28, .sp=0xac, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x2b}, {.addr=0x7192, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7193, .a=0x6d, .x=0x44, .y=0x28, .sp=0xac, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x2b}, {.addr=0x7192, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7192, .value=0x66, .type=IO_READ},
        {.addr=0x7193, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0093) {
    const struct CPU_State initial_cpu = {.pc=0x255d, .a=0x96, .x=0x3f, .y=0x90, .sp=0x7b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xb0}, {.addr=0x255d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x255e, .a=0x96, .x=0x3f, .y=0x90, .sp=0x7b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xb0}, {.addr=0x255d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x255d, .value=0x66, .type=IO_READ},
        {.addr=0x255e, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0094) {
    const struct CPU_State initial_cpu = {.pc=0x8494, .a=0x9a, .x=0x06, .y=0x65, .sp=0x64, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0xa2}, {.addr=0x8494, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8495, .a=0x9a, .x=0x06, .y=0x65, .sp=0x64, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0xa2}, {.addr=0x8494, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8494, .value=0x66, .type=IO_READ},
        {.addr=0x8495, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0095) {
    const struct CPU_State initial_cpu = {.pc=0xea2d, .a=0x39, .x=0xc2, .y=0x76, .sp=0xa5, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x58}, {.addr=0xea2d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xea2e, .a=0x39, .x=0xc2, .y=0x76, .sp=0xa5, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x58}, {.addr=0xea2d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xea2d, .value=0x66, .type=IO_READ},
        {.addr=0xea2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0096) {
    const struct CPU_State initial_cpu = {.pc=0xa79c, .a=0xca, .x=0x11, .y=0x25, .sp=0x0c, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xaa}, {.addr=0xa79c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa79d, .a=0xca, .x=0x11, .y=0x25, .sp=0x0c, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xaa}, {.addr=0xa79c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa79c, .value=0x66, .type=IO_READ},
        {.addr=0xa79d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0097) {
    const struct CPU_State initial_cpu = {.pc=0x240c, .a=0xe3, .x=0x65, .y=0x86, .sp=0x6e, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0x3a}, {.addr=0x240c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x240d, .a=0xe3, .x=0x65, .y=0x86, .sp=0x6e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0x3a}, {.addr=0x240c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x240c, .value=0x66, .type=IO_READ},
        {.addr=0x240d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0098) {
    const struct CPU_State initial_cpu = {.pc=0xce4e, .a=0x2c, .x=0xf2, .y=0xb0, .sp=0xb9, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x9c}, {.addr=0xce4e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xce4f, .a=0x2c, .x=0xf2, .y=0xb0, .sp=0xb9, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x9c}, {.addr=0xce4e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xce4e, .value=0x66, .type=IO_READ},
        {.addr=0xce4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0099) {
    const struct CPU_State initial_cpu = {.pc=0xffed, .a=0xa1, .x=0x92, .y=0xac, .sp=0x9f, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0xea}, {.addr=0xffed, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xffee, .a=0xa1, .x=0x92, .y=0xac, .sp=0x9f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xea}, {.addr=0xffed, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xffed, .value=0x66, .type=IO_READ},
        {.addr=0xffee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_009A) {
    const struct CPU_State initial_cpu = {.pc=0x4c9e, .a=0x77, .x=0xe2, .y=0xa1, .sp=0x59, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x54}, {.addr=0x4c9e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4c9f, .a=0x77, .x=0xe2, .y=0xa1, .sp=0x59, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x54}, {.addr=0x4c9e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4c9e, .value=0x66, .type=IO_READ},
        {.addr=0x4c9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_009B) {
    const struct CPU_State initial_cpu = {.pc=0xd2fc, .a=0x72, .x=0x96, .y=0xea, .sp=0x0e, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x13}, {.addr=0xd2fc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd2fd, .a=0x72, .x=0x96, .y=0xea, .sp=0x0e, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x13}, {.addr=0xd2fc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd2fc, .value=0x66, .type=IO_READ},
        {.addr=0xd2fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_009C) {
    const struct CPU_State initial_cpu = {.pc=0xb6f5, .a=0x63, .x=0x28, .y=0x8f, .sp=0x5b, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xe9}, {.addr=0xb6f5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb6f6, .a=0x63, .x=0x28, .y=0x8f, .sp=0x5b, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xe9}, {.addr=0xb6f5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb6f5, .value=0x66, .type=IO_READ},
        {.addr=0xb6f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_009D) {
    const struct CPU_State initial_cpu = {.pc=0x9416, .a=0x6d, .x=0x2e, .y=0xa1, .sp=0x37, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x86}, {.addr=0x9416, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9417, .a=0x6d, .x=0x2e, .y=0xa1, .sp=0x37, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x86}, {.addr=0x9416, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9416, .value=0x66, .type=IO_READ},
        {.addr=0x9417, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_009E) {
    const struct CPU_State initial_cpu = {.pc=0x9806, .a=0x94, .x=0x25, .y=0x2f, .sp=0xfd, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xb5}, {.addr=0x9806, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9807, .a=0x94, .x=0x25, .y=0x2f, .sp=0xfd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xb5}, {.addr=0x9806, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9806, .value=0x66, .type=IO_READ},
        {.addr=0x9807, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_009F) {
    const struct CPU_State initial_cpu = {.pc=0x97ff, .a=0x6b, .x=0xbb, .y=0x1a, .sp=0x10, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0xf2}, {.addr=0x97ff, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9800, .a=0x6b, .x=0xbb, .y=0x1a, .sp=0x10, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xf2}, {.addr=0x97ff, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x97ff, .value=0x66, .type=IO_READ},
        {.addr=0x9800, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x2821, .a=0xe2, .x=0xf0, .y=0x07, .sp=0x36, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xf6}, {.addr=0x2821, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2822, .a=0xe2, .x=0xf0, .y=0x07, .sp=0x36, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xf6}, {.addr=0x2821, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2821, .value=0x66, .type=IO_READ},
        {.addr=0x2822, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x2d43, .a=0xc0, .x=0xbc, .y=0xb4, .sp=0x67, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xbe}, {.addr=0x2d43, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2d44, .a=0xc0, .x=0xbc, .y=0xb4, .sp=0x67, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xbe}, {.addr=0x2d43, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2d43, .value=0x66, .type=IO_READ},
        {.addr=0x2d44, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xc3b8, .a=0xea, .x=0xd9, .y=0xf9, .sp=0xb1, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x94}, {.addr=0xc3b8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc3b9, .a=0xea, .x=0xd9, .y=0xf9, .sp=0xb1, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x94}, {.addr=0xc3b8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc3b8, .value=0x66, .type=IO_READ},
        {.addr=0xc3b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xbd42, .a=0x1b, .x=0x85, .y=0x6d, .sp=0xca, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xb9}, {.addr=0xbd42, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbd43, .a=0x1b, .x=0x85, .y=0x6d, .sp=0xca, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xb9}, {.addr=0xbd42, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbd42, .value=0x66, .type=IO_READ},
        {.addr=0xbd43, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x384b, .a=0x3f, .x=0x1a, .y=0x4f, .sp=0x67, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x001a, .value=0xc6}, {.addr=0x384b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x384c, .a=0x3f, .x=0x1a, .y=0x4f, .sp=0x67, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x001a, .value=0xc6}, {.addr=0x384b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x384b, .value=0x66, .type=IO_READ},
        {.addr=0x384c, .value=DUMMY, .type=IO_READ},
        {.addr=0x001a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x927e, .a=0x8b, .x=0xe2, .y=0xc8, .sp=0xc3, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0xb1}, {.addr=0x927e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x927f, .a=0x8b, .x=0xe2, .y=0xc8, .sp=0xc3, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xb1}, {.addr=0x927e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x927e, .value=0x66, .type=IO_READ},
        {.addr=0x927f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x4209, .a=0x6b, .x=0x1c, .y=0xa3, .sp=0x90, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x49}, {.addr=0x4209, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x420a, .a=0x6b, .x=0x1c, .y=0xa3, .sp=0x90, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x49}, {.addr=0x4209, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4209, .value=0x66, .type=IO_READ},
        {.addr=0x420a, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xab30, .a=0x9f, .x=0x4b, .y=0x43, .sp=0x36, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x71}, {.addr=0xab30, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xab31, .a=0x9f, .x=0x4b, .y=0x43, .sp=0x36, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x71}, {.addr=0xab30, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xab30, .value=0x66, .type=IO_READ},
        {.addr=0xab31, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x4abb, .a=0x58, .x=0x5d, .y=0x51, .sp=0xd2, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x3d}, {.addr=0x4abb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4abc, .a=0x58, .x=0x5d, .y=0x51, .sp=0xd2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x3d}, {.addr=0x4abb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4abb, .value=0x66, .type=IO_READ},
        {.addr=0x4abc, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x8e39, .a=0xd3, .x=0xde, .y=0x30, .sp=0xd1, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0xe9}, {.addr=0x8e39, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8e3a, .a=0xd3, .x=0xde, .y=0x30, .sp=0xd1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xe9}, {.addr=0x8e39, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8e39, .value=0x66, .type=IO_READ},
        {.addr=0x8e3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00AA) {
    const struct CPU_State initial_cpu = {.pc=0xe828, .a=0x9e, .x=0x0f, .y=0x8a, .sp=0x6c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x1a}, {.addr=0xe828, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe829, .a=0x9e, .x=0x0f, .y=0x8a, .sp=0x6c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x1a}, {.addr=0xe828, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe828, .value=0x66, .type=IO_READ},
        {.addr=0xe829, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x3545, .a=0x8f, .x=0xe0, .y=0x6f, .sp=0x99, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x2a}, {.addr=0x3545, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3546, .a=0x8f, .x=0xe0, .y=0x6f, .sp=0x99, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x2a}, {.addr=0x3545, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3545, .value=0x66, .type=IO_READ},
        {.addr=0x3546, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x515e, .a=0xa5, .x=0x4c, .y=0xb3, .sp=0x5d, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x7d}, {.addr=0x515e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x515f, .a=0xa5, .x=0x4c, .y=0xb3, .sp=0x5d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x7d}, {.addr=0x515e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x515e, .value=0x66, .type=IO_READ},
        {.addr=0x515f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x4c0d, .a=0x14, .x=0xd4, .y=0xae, .sp=0x68, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xb7}, {.addr=0x4c0d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4c0e, .a=0x14, .x=0xd4, .y=0xae, .sp=0x68, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xb7}, {.addr=0x4c0d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4c0d, .value=0x66, .type=IO_READ},
        {.addr=0x4c0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x4648, .a=0xbb, .x=0x09, .y=0x69, .sp=0x16, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x34}, {.addr=0x4648, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4649, .a=0xbb, .x=0x09, .y=0x69, .sp=0x16, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0x34}, {.addr=0x4648, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4648, .value=0x66, .type=IO_READ},
        {.addr=0x4649, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xc380, .a=0x6e, .x=0x9f, .y=0xb5, .sp=0x8e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0xdc}, {.addr=0xc380, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc381, .a=0x6e, .x=0x9f, .y=0xb5, .sp=0x8e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0xdc}, {.addr=0xc380, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc380, .value=0x66, .type=IO_READ},
        {.addr=0xc381, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x63c7, .a=0x77, .x=0x9a, .y=0x99, .sp=0xff, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0xd1}, {.addr=0x63c7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x63c8, .a=0x77, .x=0x9a, .y=0x99, .sp=0xff, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xd1}, {.addr=0x63c7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x63c7, .value=0x66, .type=IO_READ},
        {.addr=0x63c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x7882, .a=0x26, .x=0x61, .y=0x3e, .sp=0xd6, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0xbc}, {.addr=0x7882, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7883, .a=0x26, .x=0x61, .y=0x3e, .sp=0xd6, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0xbc}, {.addr=0x7882, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7882, .value=0x66, .type=IO_READ},
        {.addr=0x7883, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x9990, .a=0x12, .x=0x5b, .y=0x53, .sp=0x46, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x8d}, {.addr=0x9990, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9991, .a=0x12, .x=0x5b, .y=0x53, .sp=0x46, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x8d}, {.addr=0x9990, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9990, .value=0x66, .type=IO_READ},
        {.addr=0x9991, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xecb5, .a=0x27, .x=0xba, .y=0x2d, .sp=0xec, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0xec}, {.addr=0xecb5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xecb6, .a=0x27, .x=0xba, .y=0x2d, .sp=0xec, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0xec}, {.addr=0xecb5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xecb5, .value=0x66, .type=IO_READ},
        {.addr=0xecb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x16ee, .a=0xaa, .x=0x32, .y=0x13, .sp=0xee, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0x28}, {.addr=0x16ee, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x16ef, .a=0xaa, .x=0x32, .y=0x13, .sp=0xee, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0x28}, {.addr=0x16ee, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x16ee, .value=0x66, .type=IO_READ},
        {.addr=0x16ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x0690, .a=0xa7, .x=0xad, .y=0xcc, .sp=0x3f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x6d}, {.addr=0x0690, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0691, .a=0xa7, .x=0xad, .y=0xcc, .sp=0x3f, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x6d}, {.addr=0x0690, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0690, .value=0x66, .type=IO_READ},
        {.addr=0x0691, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x83a5, .a=0x56, .x=0xf1, .y=0xee, .sp=0x61, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0xde}, {.addr=0x83a5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x83a6, .a=0x56, .x=0xf1, .y=0xee, .sp=0x61, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xde}, {.addr=0x83a5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x83a5, .value=0x66, .type=IO_READ},
        {.addr=0x83a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x9611, .a=0x77, .x=0xa2, .y=0x83, .sp=0x90, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0xf4}, {.addr=0x9611, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9612, .a=0x77, .x=0xa2, .y=0x83, .sp=0x90, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0xf4}, {.addr=0x9611, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9611, .value=0x66, .type=IO_READ},
        {.addr=0x9612, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xc4f6, .a=0xe0, .x=0x82, .y=0x68, .sp=0x5a, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0x89}, {.addr=0xc4f6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc4f7, .a=0xe0, .x=0x82, .y=0x68, .sp=0x5a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0x89}, {.addr=0xc4f6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc4f6, .value=0x66, .type=IO_READ},
        {.addr=0xc4f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xac4a, .a=0x8a, .x=0x10, .y=0xb4, .sp=0x99, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x9a}, {.addr=0xac4a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xac4b, .a=0x8a, .x=0x10, .y=0xb4, .sp=0x99, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x9a}, {.addr=0xac4a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xac4a, .value=0x66, .type=IO_READ},
        {.addr=0xac4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xe6e3, .a=0x42, .x=0xbd, .y=0xe7, .sp=0x09, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x97}, {.addr=0xe6e3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe6e4, .a=0x42, .x=0xbd, .y=0xe7, .sp=0x09, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x97}, {.addr=0xe6e3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe6e3, .value=0x66, .type=IO_READ},
        {.addr=0xe6e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x5c46, .a=0xb0, .x=0x01, .y=0xed, .sp=0x13, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0001, .value=0xca}, {.addr=0x5c46, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5c47, .a=0xb0, .x=0x01, .y=0xed, .sp=0x13, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0001, .value=0xca}, {.addr=0x5c46, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5c46, .value=0x66, .type=IO_READ},
        {.addr=0x5c47, .value=DUMMY, .type=IO_READ},
        {.addr=0x0001, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xb676, .a=0x74, .x=0x0d, .y=0xd4, .sp=0xd9, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x3e}, {.addr=0xb676, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb677, .a=0x74, .x=0x0d, .y=0xd4, .sp=0xd9, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x3e}, {.addr=0xb676, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb676, .value=0x66, .type=IO_READ},
        {.addr=0xb677, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x6a48, .a=0x0d, .x=0xd6, .y=0x35, .sp=0xf5, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xd5}, {.addr=0x6a48, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6a49, .a=0x0d, .x=0xd6, .y=0x35, .sp=0xf5, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xd5}, {.addr=0x6a48, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6a48, .value=0x66, .type=IO_READ},
        {.addr=0x6a49, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x1566, .a=0xfb, .x=0xe8, .y=0x53, .sp=0xc3, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0xb7}, {.addr=0x1566, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1567, .a=0xfb, .x=0xe8, .y=0x53, .sp=0xc3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xb7}, {.addr=0x1566, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1566, .value=0x66, .type=IO_READ},
        {.addr=0x1567, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x0138, .a=0x8d, .x=0xa6, .y=0xf1, .sp=0xd4, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0x7f}, {.addr=0x0138, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0139, .a=0x8d, .x=0xa6, .y=0xf1, .sp=0xd4, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0x7f}, {.addr=0x0138, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0138, .value=0x66, .type=IO_READ},
        {.addr=0x0139, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x67bf, .a=0x22, .x=0x7a, .y=0x41, .sp=0xd8, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x83}, {.addr=0x67bf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x67c0, .a=0x22, .x=0x7a, .y=0x41, .sp=0xd8, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x83}, {.addr=0x67bf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x67bf, .value=0x66, .type=IO_READ},
        {.addr=0x67c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C1) {
    const struct CPU_State initial_cpu = {.pc=0xa402, .a=0x30, .x=0xa4, .y=0x2d, .sp=0x5f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x5c}, {.addr=0xa402, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa403, .a=0x30, .x=0xa4, .y=0x2d, .sp=0x5f, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0x5c}, {.addr=0xa402, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa402, .value=0x66, .type=IO_READ},
        {.addr=0xa403, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x01bb, .a=0x6a, .x=0x52, .y=0xc7, .sp=0xff, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x2b}, {.addr=0x01bb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x01bc, .a=0x6a, .x=0x52, .y=0xc7, .sp=0xff, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x2b}, {.addr=0x01bb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x01bb, .value=0x66, .type=IO_READ},
        {.addr=0x01bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x385a, .a=0x7b, .x=0x66, .y=0xea, .sp=0xde, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0x7b}, {.addr=0x385a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x385b, .a=0x7b, .x=0x66, .y=0xea, .sp=0xde, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0x7b}, {.addr=0x385a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x385a, .value=0x66, .type=IO_READ},
        {.addr=0x385b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x00ab, .a=0x78, .x=0x2d, .y=0x14, .sp=0xf8, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x66}, {.addr=0x012d, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x00ac, .a=0x78, .x=0x2d, .y=0x14, .sp=0xf8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x66}, {.addr=0x012d, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x00ab, .value=0x66, .type=IO_READ},
        {.addr=0x00ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C5) {
    const struct CPU_State initial_cpu = {.pc=0xe422, .a=0x67, .x=0xe4, .y=0x95, .sp=0x7b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x87}, {.addr=0xe422, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe423, .a=0x67, .x=0xe4, .y=0x95, .sp=0x7b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x87}, {.addr=0xe422, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe422, .value=0x66, .type=IO_READ},
        {.addr=0xe423, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x6a0a, .a=0xdb, .x=0xe9, .y=0x10, .sp=0xd2, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0xe3}, {.addr=0x6a0a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6a0b, .a=0xdb, .x=0xe9, .y=0x10, .sp=0xd2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xe3}, {.addr=0x6a0a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6a0a, .value=0x66, .type=IO_READ},
        {.addr=0x6a0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x09a9, .a=0x7c, .x=0xd8, .y=0x2d, .sp=0x98, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x19}, {.addr=0x09a9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x09aa, .a=0x7c, .x=0xd8, .y=0x2d, .sp=0x98, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x19}, {.addr=0x09a9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x09a9, .value=0x66, .type=IO_READ},
        {.addr=0x09aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C8) {
    const struct CPU_State initial_cpu = {.pc=0xdd7c, .a=0x09, .x=0x57, .y=0x59, .sp=0x77, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x62}, {.addr=0xdd7c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdd7d, .a=0x09, .x=0x57, .y=0x59, .sp=0x77, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x62}, {.addr=0xdd7c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdd7c, .value=0x66, .type=IO_READ},
        {.addr=0xdd7d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x6e59, .a=0x1e, .x=0x03, .y=0x9c, .sp=0x7a, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x24}, {.addr=0x6e59, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6e5a, .a=0x1e, .x=0x03, .y=0x9c, .sp=0x7a, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x24}, {.addr=0x6e59, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6e59, .value=0x66, .type=IO_READ},
        {.addr=0x6e5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x7194, .a=0xd2, .x=0x1f, .y=0x37, .sp=0xe6, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x001f, .value=0x6e}, {.addr=0x7194, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7195, .a=0xd2, .x=0x1f, .y=0x37, .sp=0xe6, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x001f, .value=0x6e}, {.addr=0x7194, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7194, .value=0x66, .type=IO_READ},
        {.addr=0x7195, .value=DUMMY, .type=IO_READ},
        {.addr=0x001f, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x7e63, .a=0x59, .x=0xed, .y=0x1a, .sp=0xa1, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x9b}, {.addr=0x7e63, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7e64, .a=0x59, .x=0xed, .y=0x1a, .sp=0xa1, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x9b}, {.addr=0x7e63, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7e63, .value=0x66, .type=IO_READ},
        {.addr=0x7e64, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00CC) {
    const struct CPU_State initial_cpu = {.pc=0xcf26, .a=0x70, .x=0x2a, .y=0x03, .sp=0x4a, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x02}, {.addr=0xcf26, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcf27, .a=0x70, .x=0x2a, .y=0x03, .sp=0x4a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x02}, {.addr=0xcf26, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcf26, .value=0x66, .type=IO_READ},
        {.addr=0xcf27, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00CE) {
    const struct CPU_State initial_cpu = {.pc=0xdac0, .a=0x5b, .x=0xfe, .y=0xcf, .sp=0x8a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0xf1}, {.addr=0xdac0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdac1, .a=0x5b, .x=0xfe, .y=0xcf, .sp=0x8a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xf1}, {.addr=0xdac0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdac0, .value=0x66, .type=IO_READ},
        {.addr=0xdac1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x41da, .a=0xb6, .x=0x5f, .y=0x7a, .sp=0x0d, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x95}, {.addr=0x41da, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x41db, .a=0xb6, .x=0x5f, .y=0x7a, .sp=0x0d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x95}, {.addr=0x41da, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x41da, .value=0x66, .type=IO_READ},
        {.addr=0x41db, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x2fb2, .a=0xe5, .x=0x27, .y=0x8c, .sp=0x4c, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x47}, {.addr=0x2fb2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2fb3, .a=0xe5, .x=0x27, .y=0x8c, .sp=0x4c, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x47}, {.addr=0x2fb2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2fb2, .value=0x66, .type=IO_READ},
        {.addr=0x2fb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x880e, .a=0x12, .x=0xdc, .y=0x83, .sp=0x3e, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x25}, {.addr=0x880e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x880f, .a=0x12, .x=0xdc, .y=0x83, .sp=0x3e, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x25}, {.addr=0x880e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x880e, .value=0x66, .type=IO_READ},
        {.addr=0x880f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xb30a, .a=0xd0, .x=0xd3, .y=0x68, .sp=0xbf, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0xde}, {.addr=0xb30a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb30b, .a=0xd0, .x=0xd3, .y=0x68, .sp=0xbf, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xde}, {.addr=0xb30a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb30a, .value=0x66, .type=IO_READ},
        {.addr=0xb30b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xe4d9, .a=0x72, .x=0xed, .y=0xcd, .sp=0x90, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x9a}, {.addr=0xe4d9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe4da, .a=0x72, .x=0xed, .y=0xcd, .sp=0x90, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x9a}, {.addr=0xe4d9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe4d9, .value=0x66, .type=IO_READ},
        {.addr=0xe4da, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xa39d, .a=0xf3, .x=0xea, .y=0xc1, .sp=0x8b, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0xb7}, {.addr=0xa39d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa39e, .a=0xf3, .x=0xea, .y=0xc1, .sp=0x8b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0xb7}, {.addr=0xa39d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa39d, .value=0x66, .type=IO_READ},
        {.addr=0xa39e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x7af4, .a=0xbe, .x=0x6c, .y=0x8f, .sp=0x08, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x11}, {.addr=0x7af4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7af5, .a=0xbe, .x=0x6c, .y=0x8f, .sp=0x08, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x11}, {.addr=0x7af4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7af4, .value=0x66, .type=IO_READ},
        {.addr=0x7af5, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xb481, .a=0xc8, .x=0xc9, .y=0x3d, .sp=0xb1, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x39}, {.addr=0xb481, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb482, .a=0xc8, .x=0xc9, .y=0x3d, .sp=0xb1, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x39}, {.addr=0xb481, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb481, .value=0x66, .type=IO_READ},
        {.addr=0xb482, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x1105, .a=0x67, .x=0x1f, .y=0x98, .sp=0x09, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0xb6}, {.addr=0x1105, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1106, .a=0x67, .x=0x1f, .y=0x98, .sp=0x09, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0xb6}, {.addr=0x1105, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1105, .value=0x66, .type=IO_READ},
        {.addr=0x1106, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xc461, .a=0xc5, .x=0x8c, .y=0x19, .sp=0x22, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x78}, {.addr=0xc461, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc462, .a=0xc5, .x=0x8c, .y=0x19, .sp=0x22, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x78}, {.addr=0xc461, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc461, .value=0x66, .type=IO_READ},
        {.addr=0xc462, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xd2c2, .a=0xea, .x=0x4c, .y=0x97, .sp=0x70, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xb3}, {.addr=0xd2c2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd2c3, .a=0xea, .x=0x4c, .y=0x97, .sp=0x70, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xb3}, {.addr=0xd2c2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd2c2, .value=0x66, .type=IO_READ},
        {.addr=0xd2c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x139a, .a=0xb3, .x=0x7f, .y=0x3d, .sp=0xd9, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x64}, {.addr=0x139a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x139b, .a=0xb3, .x=0x7f, .y=0x3d, .sp=0xd9, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x64}, {.addr=0x139a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x139a, .value=0x66, .type=IO_READ},
        {.addr=0x139b, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x6354, .a=0x4c, .x=0xe5, .y=0x36, .sp=0xf6, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x6f}, {.addr=0x6354, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6355, .a=0x4c, .x=0xe5, .y=0x36, .sp=0xf6, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x6f}, {.addr=0x6354, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6354, .value=0x66, .type=IO_READ},
        {.addr=0x6355, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xc4bb, .a=0x3c, .x=0x32, .y=0xd1, .sp=0x8c, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xe6}, {.addr=0xc4bb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc4bc, .a=0x3c, .x=0x32, .y=0xd1, .sp=0x8c, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xe6}, {.addr=0xc4bb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc4bb, .value=0x66, .type=IO_READ},
        {.addr=0xc4bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x15fc, .a=0xa5, .x=0x2c, .y=0x2c, .sp=0x32, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0xe3}, {.addr=0x15fc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x15fd, .a=0xa5, .x=0x2c, .y=0x2c, .sp=0x32, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0xe3}, {.addr=0x15fc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x15fc, .value=0x66, .type=IO_READ},
        {.addr=0x15fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xbefe, .a=0xc6, .x=0x38, .y=0x5c, .sp=0x2a, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0038, .value=0x3f}, {.addr=0xbefe, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbeff, .a=0xc6, .x=0x38, .y=0x5c, .sp=0x2a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0038, .value=0x3f}, {.addr=0xbefe, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbefe, .value=0x66, .type=IO_READ},
        {.addr=0xbeff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0038, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xf9a9, .a=0x03, .x=0x44, .y=0xea, .sp=0x44, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0xce}, {.addr=0xf9a9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf9aa, .a=0x03, .x=0x44, .y=0xea, .sp=0x44, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0xce}, {.addr=0xf9a9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf9a9, .value=0x66, .type=IO_READ},
        {.addr=0xf9aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xbde6, .a=0xd7, .x=0x47, .y=0xfd, .sp=0xde, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x58}, {.addr=0xbde6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbde7, .a=0xd7, .x=0x47, .y=0xfd, .sp=0xde, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0x58}, {.addr=0xbde6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbde6, .value=0x66, .type=IO_READ},
        {.addr=0xbde7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x73d8, .a=0x90, .x=0x3d, .y=0x59, .sp=0x6d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x3a}, {.addr=0x73d8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x73d9, .a=0x90, .x=0x3d, .y=0x59, .sp=0x6d, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x3a}, {.addr=0x73d8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x73d8, .value=0x66, .type=IO_READ},
        {.addr=0x73d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x6582, .a=0x7f, .x=0x70, .y=0x68, .sp=0x89, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x03}, {.addr=0x6582, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6583, .a=0x7f, .x=0x70, .y=0x68, .sp=0x89, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x03}, {.addr=0x6582, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6582, .value=0x66, .type=IO_READ},
        {.addr=0x6583, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x4c52, .a=0x48, .x=0xc2, .y=0x2a, .sp=0x21, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x5f}, {.addr=0x4c52, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4c53, .a=0x48, .x=0xc2, .y=0x2a, .sp=0x21, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x5f}, {.addr=0x4c52, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4c52, .value=0x66, .type=IO_READ},
        {.addr=0x4c53, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x6905, .a=0x90, .x=0xc0, .y=0x92, .sp=0x14, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x58}, {.addr=0x6905, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6906, .a=0x90, .x=0xc0, .y=0x92, .sp=0x14, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x58}, {.addr=0x6905, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6905, .value=0x66, .type=IO_READ},
        {.addr=0x6906, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x7dc1, .a=0xb3, .x=0x06, .y=0x74, .sp=0x17, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xc1}, {.addr=0x7dc1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7dc2, .a=0xb3, .x=0x06, .y=0x74, .sp=0x17, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xc1}, {.addr=0x7dc1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7dc1, .value=0x66, .type=IO_READ},
        {.addr=0x7dc2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xee53, .a=0x2e, .x=0x5f, .y=0x86, .sp=0xc4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x1c}, {.addr=0xee53, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xee54, .a=0x2e, .x=0x5f, .y=0x86, .sp=0xc4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x1c}, {.addr=0xee53, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xee53, .value=0x66, .type=IO_READ},
        {.addr=0xee54, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x8caf, .a=0x3c, .x=0x06, .y=0x05, .sp=0xc8, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0x93}, {.addr=0x8caf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8cb0, .a=0x3c, .x=0x06, .y=0x05, .sp=0xc8, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0x93}, {.addr=0x8caf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8caf, .value=0x66, .type=IO_READ},
        {.addr=0x8cb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x0630, .a=0xd5, .x=0x97, .y=0xb1, .sp=0x27, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0xc7}, {.addr=0x0630, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0631, .a=0xd5, .x=0x97, .y=0xb1, .sp=0x27, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xc7}, {.addr=0x0630, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0630, .value=0x66, .type=IO_READ},
        {.addr=0x0631, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xcd24, .a=0xa3, .x=0x8f, .y=0x8e, .sp=0xdf, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x008f, .value=0x00}, {.addr=0xcd24, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcd25, .a=0xa3, .x=0x8f, .y=0x8e, .sp=0xdf, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x008f, .value=0x00}, {.addr=0xcd24, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcd24, .value=0x66, .type=IO_READ},
        {.addr=0xcd25, .value=DUMMY, .type=IO_READ},
        {.addr=0x008f, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x8bf4, .a=0xda, .x=0xae, .y=0x90, .sp=0xdf, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x3a}, {.addr=0x8bf4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8bf5, .a=0xda, .x=0xae, .y=0x90, .sp=0xdf, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x3a}, {.addr=0x8bf4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8bf4, .value=0x66, .type=IO_READ},
        {.addr=0x8bf5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xf558, .a=0x6e, .x=0x11, .y=0x07, .sp=0x2b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0xc9}, {.addr=0xf558, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf559, .a=0x6e, .x=0x11, .y=0x07, .sp=0x2b, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xc9}, {.addr=0xf558, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf558, .value=0x66, .type=IO_READ},
        {.addr=0xf559, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x7c34, .a=0x4e, .x=0x42, .y=0x47, .sp=0x44, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0xd4}, {.addr=0x7c34, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7c35, .a=0x4e, .x=0x42, .y=0x47, .sp=0x44, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xd4}, {.addr=0x7c34, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7c34, .value=0x66, .type=IO_READ},
        {.addr=0x7c35, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x208d, .a=0x75, .x=0x2c, .y=0x87, .sp=0x78, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x002c, .value=0x96}, {.addr=0x208d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x208e, .a=0x75, .x=0x2c, .y=0x87, .sp=0x78, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x002c, .value=0x96}, {.addr=0x208d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x208d, .value=0x66, .type=IO_READ},
        {.addr=0x208e, .value=DUMMY, .type=IO_READ},
        {.addr=0x002c, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xfcec, .a=0x70, .x=0x45, .y=0x14, .sp=0xef, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x30}, {.addr=0xfcec, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfced, .a=0x70, .x=0x45, .y=0x14, .sp=0xef, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x30}, {.addr=0xfcec, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfcec, .value=0x66, .type=IO_READ},
        {.addr=0xfced, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xe75a, .a=0xae, .x=0x32, .y=0x9f, .sp=0x35, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0032, .value=0xf6}, {.addr=0xe75a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe75b, .a=0xae, .x=0x32, .y=0x9f, .sp=0x35, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0032, .value=0xf6}, {.addr=0xe75a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe75a, .value=0x66, .type=IO_READ},
        {.addr=0xe75b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0032, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x20d3, .a=0xe5, .x=0x3f, .y=0x26, .sp=0xdc, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xae}, {.addr=0x20d3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x20d4, .a=0xe5, .x=0x3f, .y=0x26, .sp=0xdc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xae}, {.addr=0x20d3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x20d3, .value=0x66, .type=IO_READ},
        {.addr=0x20d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F1) {
    const struct CPU_State initial_cpu = {.pc=0xa183, .a=0x88, .x=0xec, .y=0xaf, .sp=0x59, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x29}, {.addr=0xa183, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa184, .a=0x88, .x=0xec, .y=0xaf, .sp=0x59, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x29}, {.addr=0xa183, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa183, .value=0x66, .type=IO_READ},
        {.addr=0xa184, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x3b39, .a=0x02, .x=0x4d, .y=0x98, .sp=0xe5, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0x6c}, {.addr=0x3b39, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3b3a, .a=0x02, .x=0x4d, .y=0x98, .sp=0xe5, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0x6c}, {.addr=0x3b39, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3b39, .value=0x66, .type=IO_READ},
        {.addr=0x3b3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xe8ad, .a=0x4d, .x=0x3f, .y=0xe2, .sp=0xdf, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xdc}, {.addr=0xe8ad, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe8ae, .a=0x4d, .x=0x3f, .y=0xe2, .sp=0xdf, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xdc}, {.addr=0xe8ad, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe8ad, .value=0x66, .type=IO_READ},
        {.addr=0xe8ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x0c96, .a=0xbd, .x=0x3b, .y=0x6e, .sp=0x54, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x31}, {.addr=0x0c96, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0c97, .a=0xbd, .x=0x3b, .y=0x6e, .sp=0x54, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x31}, {.addr=0x0c96, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0c96, .value=0x66, .type=IO_READ},
        {.addr=0x0c97, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x7d89, .a=0x7c, .x=0x1d, .y=0x91, .sp=0x3d, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x57}, {.addr=0x7d89, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7d8a, .a=0x7c, .x=0x1d, .y=0x91, .sp=0x3d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x57}, {.addr=0x7d89, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7d89, .value=0x66, .type=IO_READ},
        {.addr=0x7d8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x59e7, .a=0x37, .x=0x6f, .y=0x88, .sp=0xb4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0xa1}, {.addr=0x59e7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x59e8, .a=0x37, .x=0x6f, .y=0x88, .sp=0xb4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xa1}, {.addr=0x59e7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x59e7, .value=0x66, .type=IO_READ},
        {.addr=0x59e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x4c98, .a=0xc2, .x=0x1c, .y=0xe0, .sp=0x7d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x01}, {.addr=0x4c98, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4c99, .a=0xc2, .x=0x1c, .y=0xe0, .sp=0x7d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x01}, {.addr=0x4c98, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4c98, .value=0x66, .type=IO_READ},
        {.addr=0x4c99, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x20cb, .a=0xe7, .x=0xbc, .y=0xae, .sp=0xee, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0xf4}, {.addr=0x20cb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x20cc, .a=0xe7, .x=0xbc, .y=0xae, .sp=0xee, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0xf4}, {.addr=0x20cb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x20cb, .value=0x66, .type=IO_READ},
        {.addr=0x20cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x331a, .a=0x30, .x=0x5b, .y=0x02, .sp=0x28, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x23}, {.addr=0x331a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x331b, .a=0x30, .x=0x5b, .y=0x02, .sp=0x28, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x23}, {.addr=0x331a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x331a, .value=0x66, .type=IO_READ},
        {.addr=0x331b, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x6a5a, .a=0x1c, .x=0xff, .y=0x74, .sp=0x7f, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x68}, {.addr=0x6a5a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6a5b, .a=0x1c, .x=0xff, .y=0x74, .sp=0x7f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x68}, {.addr=0x6a5a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6a5a, .value=0x66, .type=IO_READ},
        {.addr=0x6a5b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xa1cd, .a=0x74, .x=0x21, .y=0x21, .sp=0x5e, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x68}, {.addr=0xa1cd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa1ce, .a=0x74, .x=0x21, .y=0x21, .sp=0x5e, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x68}, {.addr=0xa1cd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa1cd, .value=0x66, .type=IO_READ},
        {.addr=0xa1ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x4dd8, .a=0xbf, .x=0x23, .y=0x74, .sp=0xce, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x37}, {.addr=0x4dd8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4dd9, .a=0xbf, .x=0x23, .y=0x74, .sp=0xce, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x37}, {.addr=0x4dd8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4dd8, .value=0x66, .type=IO_READ},
        {.addr=0x4dd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x20af, .a=0xce, .x=0xcf, .y=0x8a, .sp=0xfd, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x18}, {.addr=0x20af, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x20b0, .a=0xce, .x=0xcf, .y=0x8a, .sp=0xfd, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x18}, {.addr=0x20af, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x20af, .value=0x66, .type=IO_READ},
        {.addr=0x20b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x2dc4, .a=0x3d, .x=0x23, .y=0x36, .sp=0xa1, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x8a}, {.addr=0x2dc4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2dc5, .a=0x3d, .x=0x23, .y=0x36, .sp=0xa1, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x8a}, {.addr=0x2dc4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2dc4, .value=0x66, .type=IO_READ},
        {.addr=0x2dc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0100) {
    const struct CPU_State initial_cpu = {.pc=0x8254, .a=0x14, .x=0x4c, .y=0x37, .sp=0xaf, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x13}, {.addr=0x8254, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8255, .a=0x14, .x=0x4c, .y=0x37, .sp=0xaf, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x13}, {.addr=0x8254, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8254, .value=0x66, .type=IO_READ},
        {.addr=0x8255, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0101) {
    const struct CPU_State initial_cpu = {.pc=0x5854, .a=0x07, .x=0xba, .y=0x47, .sp=0xb1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x3c}, {.addr=0x5854, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5855, .a=0x07, .x=0xba, .y=0x47, .sp=0xb1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x3c}, {.addr=0x5854, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5854, .value=0x66, .type=IO_READ},
        {.addr=0x5855, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0102) {
    const struct CPU_State initial_cpu = {.pc=0x6e26, .a=0x1e, .x=0x2d, .y=0xdf, .sp=0x93, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0x4c}, {.addr=0x6e26, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6e27, .a=0x1e, .x=0x2d, .y=0xdf, .sp=0x93, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0x4c}, {.addr=0x6e26, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6e26, .value=0x66, .type=IO_READ},
        {.addr=0x6e27, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0103) {
    const struct CPU_State initial_cpu = {.pc=0xdb7d, .a=0x42, .x=0xdd, .y=0x48, .sp=0x49, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0xa8}, {.addr=0xdb7d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdb7e, .a=0x42, .x=0xdd, .y=0x48, .sp=0x49, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0xa8}, {.addr=0xdb7d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdb7d, .value=0x66, .type=IO_READ},
        {.addr=0xdb7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0104) {
    const struct CPU_State initial_cpu = {.pc=0x0b5d, .a=0xdd, .x=0x5d, .y=0xf2, .sp=0xb6, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x71}, {.addr=0x0b5d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0b5e, .a=0xdd, .x=0x5d, .y=0xf2, .sp=0xb6, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x71}, {.addr=0x0b5d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0b5d, .value=0x66, .type=IO_READ},
        {.addr=0x0b5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0105) {
    const struct CPU_State initial_cpu = {.pc=0x6b57, .a=0xf7, .x=0x20, .y=0x3e, .sp=0x70, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xb7}, {.addr=0x6b57, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6b58, .a=0xf7, .x=0x20, .y=0x3e, .sp=0x70, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xb7}, {.addr=0x6b57, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6b57, .value=0x66, .type=IO_READ},
        {.addr=0x6b58, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0106) {
    const struct CPU_State initial_cpu = {.pc=0x0673, .a=0xea, .x=0xd6, .y=0xf3, .sp=0x90, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xa3}, {.addr=0x0673, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0674, .a=0xea, .x=0xd6, .y=0xf3, .sp=0x90, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xa3}, {.addr=0x0673, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0673, .value=0x66, .type=IO_READ},
        {.addr=0x0674, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0107) {
    const struct CPU_State initial_cpu = {.pc=0xc658, .a=0x85, .x=0xee, .y=0x86, .sp=0xa8, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x5c}, {.addr=0xc658, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc659, .a=0x85, .x=0xee, .y=0x86, .sp=0xa8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x5c}, {.addr=0xc658, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc658, .value=0x66, .type=IO_READ},
        {.addr=0xc659, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0108) {
    const struct CPU_State initial_cpu = {.pc=0x6b8b, .a=0xcc, .x=0xc9, .y=0xfa, .sp=0x0f, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c9, .value=0x63}, {.addr=0x6b8b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6b8c, .a=0xcc, .x=0xc9, .y=0xfa, .sp=0x0f, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00c9, .value=0x63}, {.addr=0x6b8b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6b8b, .value=0x66, .type=IO_READ},
        {.addr=0x6b8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c9, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0109) {
    const struct CPU_State initial_cpu = {.pc=0xfcc3, .a=0x13, .x=0x67, .y=0xad, .sp=0x92, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0xcb}, {.addr=0xfcc3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfcc4, .a=0x13, .x=0x67, .y=0xad, .sp=0x92, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0xcb}, {.addr=0xfcc3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfcc3, .value=0x66, .type=IO_READ},
        {.addr=0xfcc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_010A) {
    const struct CPU_State initial_cpu = {.pc=0xa0dd, .a=0x43, .x=0x55, .y=0x2b, .sp=0xa0, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xc6}, {.addr=0xa0dd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa0de, .a=0x43, .x=0x55, .y=0x2b, .sp=0xa0, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xc6}, {.addr=0xa0dd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa0dd, .value=0x66, .type=IO_READ},
        {.addr=0xa0de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_010B) {
    const struct CPU_State initial_cpu = {.pc=0x1847, .a=0x4d, .x=0x32, .y=0xd2, .sp=0xbd, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xbe}, {.addr=0x1847, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1848, .a=0x4d, .x=0x32, .y=0xd2, .sp=0xbd, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xbe}, {.addr=0x1847, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1847, .value=0x66, .type=IO_READ},
        {.addr=0x1848, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_010C) {
    const struct CPU_State initial_cpu = {.pc=0x92eb, .a=0x5f, .x=0x44, .y=0xbb, .sp=0xa1, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x9d}, {.addr=0x92eb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x92ec, .a=0x5f, .x=0x44, .y=0xbb, .sp=0xa1, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x9d}, {.addr=0x92eb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x92eb, .value=0x66, .type=IO_READ},
        {.addr=0x92ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_010D) {
    const struct CPU_State initial_cpu = {.pc=0x30ae, .a=0xb9, .x=0xaf, .y=0x7f, .sp=0x4a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xf6}, {.addr=0x30ae, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x30af, .a=0xb9, .x=0xaf, .y=0x7f, .sp=0x4a, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xf6}, {.addr=0x30ae, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x30ae, .value=0x66, .type=IO_READ},
        {.addr=0x30af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_010E) {
    const struct CPU_State initial_cpu = {.pc=0x1084, .a=0x2d, .x=0x09, .y=0x35, .sp=0x1b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xa6}, {.addr=0x1084, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1085, .a=0x2d, .x=0x09, .y=0x35, .sp=0x1b, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xa6}, {.addr=0x1084, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1084, .value=0x66, .type=IO_READ},
        {.addr=0x1085, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_010F) {
    const struct CPU_State initial_cpu = {.pc=0x0abf, .a=0xf3, .x=0xba, .y=0x56, .sp=0x49, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x1d}, {.addr=0x0abf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0ac0, .a=0xf3, .x=0xba, .y=0x56, .sp=0x49, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x1d}, {.addr=0x0abf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0abf, .value=0x66, .type=IO_READ},
        {.addr=0x0ac0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0110) {
    const struct CPU_State initial_cpu = {.pc=0xde23, .a=0xf1, .x=0x42, .y=0xa3, .sp=0x90, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x50}, {.addr=0xde23, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xde24, .a=0xf1, .x=0x42, .y=0xa3, .sp=0x90, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x50}, {.addr=0xde23, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xde23, .value=0x66, .type=IO_READ},
        {.addr=0xde24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0111) {
    const struct CPU_State initial_cpu = {.pc=0xee08, .a=0x00, .x=0x63, .y=0x91, .sp=0x68, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x9b}, {.addr=0xee08, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xee09, .a=0x00, .x=0x63, .y=0x91, .sp=0x68, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x9b}, {.addr=0xee08, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xee08, .value=0x66, .type=IO_READ},
        {.addr=0xee09, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0112) {
    const struct CPU_State initial_cpu = {.pc=0x7cf5, .a=0x73, .x=0x81, .y=0x10, .sp=0x4f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x77}, {.addr=0x7cf5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7cf6, .a=0x73, .x=0x81, .y=0x10, .sp=0x4f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x77}, {.addr=0x7cf5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7cf5, .value=0x66, .type=IO_READ},
        {.addr=0x7cf6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0113) {
    const struct CPU_State initial_cpu = {.pc=0x3bf3, .a=0xd6, .x=0x4e, .y=0xde, .sp=0x37, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x004e, .value=0x56}, {.addr=0x3bf3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3bf4, .a=0xd6, .x=0x4e, .y=0xde, .sp=0x37, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x004e, .value=0x56}, {.addr=0x3bf3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3bf3, .value=0x66, .type=IO_READ},
        {.addr=0x3bf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x004e, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0114) {
    const struct CPU_State initial_cpu = {.pc=0x6a23, .a=0x6e, .x=0x43, .y=0x20, .sp=0xa1, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x91}, {.addr=0x6a23, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6a24, .a=0x6e, .x=0x43, .y=0x20, .sp=0xa1, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x91}, {.addr=0x6a23, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6a23, .value=0x66, .type=IO_READ},
        {.addr=0x6a24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0115) {
    const struct CPU_State initial_cpu = {.pc=0x2174, .a=0xab, .x=0x49, .y=0xb6, .sp=0x92, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x28}, {.addr=0x2174, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2175, .a=0xab, .x=0x49, .y=0xb6, .sp=0x92, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x28}, {.addr=0x2174, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2174, .value=0x66, .type=IO_READ},
        {.addr=0x2175, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0116) {
    const struct CPU_State initial_cpu = {.pc=0x3953, .a=0x53, .x=0x55, .y=0x44, .sp=0xfa, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x54}, {.addr=0x3953, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3954, .a=0x53, .x=0x55, .y=0x44, .sp=0xfa, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x54}, {.addr=0x3953, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3953, .value=0x66, .type=IO_READ},
        {.addr=0x3954, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0117) {
    const struct CPU_State initial_cpu = {.pc=0x2edd, .a=0x5a, .x=0xae, .y=0xa2, .sp=0xc1, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ae, .value=0x94}, {.addr=0x2edd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2ede, .a=0x5a, .x=0xae, .y=0xa2, .sp=0xc1, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ae, .value=0x94}, {.addr=0x2edd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2edd, .value=0x66, .type=IO_READ},
        {.addr=0x2ede, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ae, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0119) {
    const struct CPU_State initial_cpu = {.pc=0x538b, .a=0xba, .x=0x17, .y=0xcd, .sp=0xfb, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xdb}, {.addr=0x538b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x538c, .a=0xba, .x=0x17, .y=0xcd, .sp=0xfb, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xdb}, {.addr=0x538b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x538b, .value=0x66, .type=IO_READ},
        {.addr=0x538c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_011A) {
    const struct CPU_State initial_cpu = {.pc=0xd5ec, .a=0x91, .x=0x66, .y=0x0b, .sp=0x97, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x12}, {.addr=0xd5ec, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd5ed, .a=0x91, .x=0x66, .y=0x0b, .sp=0x97, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x12}, {.addr=0xd5ec, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd5ec, .value=0x66, .type=IO_READ},
        {.addr=0xd5ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_011B) {
    const struct CPU_State initial_cpu = {.pc=0xc13c, .a=0x3b, .x=0x21, .y=0x73, .sp=0x6f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x01}, {.addr=0xc13c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc13d, .a=0x3b, .x=0x21, .y=0x73, .sp=0x6f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x01}, {.addr=0xc13c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc13c, .value=0x66, .type=IO_READ},
        {.addr=0xc13d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_011C) {
    const struct CPU_State initial_cpu = {.pc=0xa25a, .a=0x45, .x=0x3c, .y=0xaf, .sp=0x61, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x4c}, {.addr=0xa25a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa25b, .a=0x45, .x=0x3c, .y=0xaf, .sp=0x61, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x4c}, {.addr=0xa25a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa25a, .value=0x66, .type=IO_READ},
        {.addr=0xa25b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_011D) {
    const struct CPU_State initial_cpu = {.pc=0x4dcf, .a=0x00, .x=0x76, .y=0xf1, .sp=0x46, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xad}, {.addr=0x4dcf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4dd0, .a=0x00, .x=0x76, .y=0xf1, .sp=0x46, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xad}, {.addr=0x4dcf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4dcf, .value=0x66, .type=IO_READ},
        {.addr=0x4dd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_011E) {
    const struct CPU_State initial_cpu = {.pc=0xaf3a, .a=0x99, .x=0x33, .y=0x60, .sp=0x94, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0xba}, {.addr=0xaf3a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xaf3b, .a=0x99, .x=0x33, .y=0x60, .sp=0x94, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0xba}, {.addr=0xaf3a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xaf3a, .value=0x66, .type=IO_READ},
        {.addr=0xaf3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_011F) {
    const struct CPU_State initial_cpu = {.pc=0x8427, .a=0xfb, .x=0x69, .y=0xc6, .sp=0xfc, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x0b}, {.addr=0x8427, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8428, .a=0xfb, .x=0x69, .y=0xc6, .sp=0xfc, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x0b}, {.addr=0x8427, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8427, .value=0x66, .type=IO_READ},
        {.addr=0x8428, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0121) {
    const struct CPU_State initial_cpu = {.pc=0x024c, .a=0xb9, .x=0x45, .y=0xc7, .sp=0x4a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x94}, {.addr=0x024c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x024d, .a=0xb9, .x=0x45, .y=0xc7, .sp=0x4a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x94}, {.addr=0x024c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x024c, .value=0x66, .type=IO_READ},
        {.addr=0x024d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0122) {
    const struct CPU_State initial_cpu = {.pc=0xc1ca, .a=0xc5, .x=0xbc, .y=0xc8, .sp=0x9b, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00bc, .value=0x54}, {.addr=0xc1ca, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc1cb, .a=0xc5, .x=0xbc, .y=0xc8, .sp=0x9b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00bc, .value=0x54}, {.addr=0xc1ca, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc1ca, .value=0x66, .type=IO_READ},
        {.addr=0xc1cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bc, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0123) {
    const struct CPU_State initial_cpu = {.pc=0x5493, .a=0x91, .x=0xa5, .y=0x33, .sp=0x86, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xa0}, {.addr=0x5493, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5494, .a=0x91, .x=0xa5, .y=0x33, .sp=0x86, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xa0}, {.addr=0x5493, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5493, .value=0x66, .type=IO_READ},
        {.addr=0x5494, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0124) {
    const struct CPU_State initial_cpu = {.pc=0x1d8e, .a=0x72, .x=0x15, .y=0xc0, .sp=0xbb, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0x62}, {.addr=0x1d8e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1d8f, .a=0x72, .x=0x15, .y=0xc0, .sp=0xbb, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0x62}, {.addr=0x1d8e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1d8e, .value=0x66, .type=IO_READ},
        {.addr=0x1d8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0125) {
    const struct CPU_State initial_cpu = {.pc=0xc2ca, .a=0xc1, .x=0x4d, .y=0x34, .sp=0xb7, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0x35}, {.addr=0xc2ca, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc2cb, .a=0xc1, .x=0x4d, .y=0x34, .sp=0xb7, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0x35}, {.addr=0xc2ca, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc2ca, .value=0x66, .type=IO_READ},
        {.addr=0xc2cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0126) {
    const struct CPU_State initial_cpu = {.pc=0xa5d9, .a=0x13, .x=0x58, .y=0xbd, .sp=0x6f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x19}, {.addr=0xa5d9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa5da, .a=0x13, .x=0x58, .y=0xbd, .sp=0x6f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x19}, {.addr=0xa5d9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa5d9, .value=0x66, .type=IO_READ},
        {.addr=0xa5da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0127) {
    const struct CPU_State initial_cpu = {.pc=0x9c68, .a=0x02, .x=0x7f, .y=0xac, .sp=0x7a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x33}, {.addr=0x9c68, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9c69, .a=0x02, .x=0x7f, .y=0xac, .sp=0x7a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x33}, {.addr=0x9c68, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9c68, .value=0x66, .type=IO_READ},
        {.addr=0x9c69, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0128) {
    const struct CPU_State initial_cpu = {.pc=0xa63a, .a=0xd1, .x=0xaa, .y=0x3f, .sp=0x63, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0xf5}, {.addr=0xa63a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa63b, .a=0xd1, .x=0xaa, .y=0x3f, .sp=0x63, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xf5}, {.addr=0xa63a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa63a, .value=0x66, .type=IO_READ},
        {.addr=0xa63b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0129) {
    const struct CPU_State initial_cpu = {.pc=0xd2e5, .a=0xd5, .x=0xa5, .y=0x8e, .sp=0xe6, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0xe9}, {.addr=0xd2e5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd2e6, .a=0xd5, .x=0xa5, .y=0x8e, .sp=0xe6, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xe9}, {.addr=0xd2e5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd2e5, .value=0x66, .type=IO_READ},
        {.addr=0xd2e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_012A) {
    const struct CPU_State initial_cpu = {.pc=0x6aa8, .a=0xa8, .x=0xb0, .y=0x8a, .sp=0x25, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x56}, {.addr=0x6aa8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6aa9, .a=0xa8, .x=0xb0, .y=0x8a, .sp=0x25, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x56}, {.addr=0x6aa8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6aa8, .value=0x66, .type=IO_READ},
        {.addr=0x6aa9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_012B) {
    const struct CPU_State initial_cpu = {.pc=0x4b65, .a=0xe0, .x=0xca, .y=0xef, .sp=0x25, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0x23}, {.addr=0x4b65, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4b66, .a=0xe0, .x=0xca, .y=0xef, .sp=0x25, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0x23}, {.addr=0x4b65, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4b65, .value=0x66, .type=IO_READ},
        {.addr=0x4b66, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_012C) {
    const struct CPU_State initial_cpu = {.pc=0x5283, .a=0xb6, .x=0xe6, .y=0x17, .sp=0xaf, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x5d}, {.addr=0x5283, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5284, .a=0xb6, .x=0xe6, .y=0x17, .sp=0xaf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x5d}, {.addr=0x5283, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5283, .value=0x66, .type=IO_READ},
        {.addr=0x5284, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_012D) {
    const struct CPU_State initial_cpu = {.pc=0x4827, .a=0x38, .x=0x78, .y=0x25, .sp=0xd4, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0xee}, {.addr=0x4827, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4828, .a=0x38, .x=0x78, .y=0x25, .sp=0xd4, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xee}, {.addr=0x4827, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4827, .value=0x66, .type=IO_READ},
        {.addr=0x4828, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_012E) {
    const struct CPU_State initial_cpu = {.pc=0x6d71, .a=0xfc, .x=0xe6, .y=0x6b, .sp=0xd1, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x68}, {.addr=0x6d71, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6d72, .a=0xfc, .x=0xe6, .y=0x6b, .sp=0xd1, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x68}, {.addr=0x6d71, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6d71, .value=0x66, .type=IO_READ},
        {.addr=0x6d72, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_012F) {
    const struct CPU_State initial_cpu = {.pc=0xcf47, .a=0x15, .x=0xdb, .y=0xb7, .sp=0x02, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0x0e}, {.addr=0xcf47, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcf48, .a=0x15, .x=0xdb, .y=0xb7, .sp=0x02, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0x0e}, {.addr=0xcf47, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcf47, .value=0x66, .type=IO_READ},
        {.addr=0xcf48, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0130) {
    const struct CPU_State initial_cpu = {.pc=0xf392, .a=0xca, .x=0x7f, .y=0xf3, .sp=0x2a, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0xaa}, {.addr=0xf392, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf393, .a=0xca, .x=0x7f, .y=0xf3, .sp=0x2a, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xaa}, {.addr=0xf392, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf392, .value=0x66, .type=IO_READ},
        {.addr=0xf393, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0131) {
    const struct CPU_State initial_cpu = {.pc=0x66b2, .a=0x03, .x=0xb5, .y=0x40, .sp=0x83, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xc1}, {.addr=0x66b2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x66b3, .a=0x03, .x=0xb5, .y=0x40, .sp=0x83, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xc1}, {.addr=0x66b2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x66b2, .value=0x66, .type=IO_READ},
        {.addr=0x66b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0132) {
    const struct CPU_State initial_cpu = {.pc=0x6732, .a=0x9c, .x=0x26, .y=0xcf, .sp=0x90, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x09}, {.addr=0x6732, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6733, .a=0x9c, .x=0x26, .y=0xcf, .sp=0x90, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x09}, {.addr=0x6732, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6732, .value=0x66, .type=IO_READ},
        {.addr=0x6733, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0133) {
    const struct CPU_State initial_cpu = {.pc=0x0edb, .a=0x7c, .x=0x27, .y=0x81, .sp=0x3d, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0xbf}, {.addr=0x0edb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0edc, .a=0x7c, .x=0x27, .y=0x81, .sp=0x3d, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0xbf}, {.addr=0x0edb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0edb, .value=0x66, .type=IO_READ},
        {.addr=0x0edc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0134) {
    const struct CPU_State initial_cpu = {.pc=0x8399, .a=0x31, .x=0x21, .y=0x2f, .sp=0x63, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xb8}, {.addr=0x8399, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x839a, .a=0x31, .x=0x21, .y=0x2f, .sp=0x63, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xb8}, {.addr=0x8399, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8399, .value=0x66, .type=IO_READ},
        {.addr=0x839a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0135) {
    const struct CPU_State initial_cpu = {.pc=0xec83, .a=0x5a, .x=0x70, .y=0x8d, .sp=0x56, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0xef}, {.addr=0xec83, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xec84, .a=0x5a, .x=0x70, .y=0x8d, .sp=0x56, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0xef}, {.addr=0xec83, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xec83, .value=0x66, .type=IO_READ},
        {.addr=0xec84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0136) {
    const struct CPU_State initial_cpu = {.pc=0x8739, .a=0x0c, .x=0xe5, .y=0x48, .sp=0x78, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0xeb}, {.addr=0x8739, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x873a, .a=0x0c, .x=0xe5, .y=0x48, .sp=0x78, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0xeb}, {.addr=0x8739, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8739, .value=0x66, .type=IO_READ},
        {.addr=0x873a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0137) {
    const struct CPU_State initial_cpu = {.pc=0x1603, .a=0x57, .x=0xe7, .y=0x9b, .sp=0x21, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0xc3}, {.addr=0x1603, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1604, .a=0x57, .x=0xe7, .y=0x9b, .sp=0x21, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0xc3}, {.addr=0x1603, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1603, .value=0x66, .type=IO_READ},
        {.addr=0x1604, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0138) {
    const struct CPU_State initial_cpu = {.pc=0x8cee, .a=0x3a, .x=0x18, .y=0xd3, .sp=0x86, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x2c}, {.addr=0x8cee, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8cef, .a=0x3a, .x=0x18, .y=0xd3, .sp=0x86, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x2c}, {.addr=0x8cee, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8cee, .value=0x66, .type=IO_READ},
        {.addr=0x8cef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0139) {
    const struct CPU_State initial_cpu = {.pc=0x6083, .a=0x0b, .x=0x02, .y=0x65, .sp=0x7b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xb2}, {.addr=0x6083, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6084, .a=0x0b, .x=0x02, .y=0x65, .sp=0x7b, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xb2}, {.addr=0x6083, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6083, .value=0x66, .type=IO_READ},
        {.addr=0x6084, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_013A) {
    const struct CPU_State initial_cpu = {.pc=0xc588, .a=0xd4, .x=0x29, .y=0x0c, .sp=0x6f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0xb8}, {.addr=0xc588, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc589, .a=0xd4, .x=0x29, .y=0x0c, .sp=0x6f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0xb8}, {.addr=0xc588, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc588, .value=0x66, .type=IO_READ},
        {.addr=0xc589, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_013B) {
    const struct CPU_State initial_cpu = {.pc=0x324b, .a=0xa1, .x=0xe9, .y=0xc1, .sp=0x7a, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x3b}, {.addr=0x324b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x324c, .a=0xa1, .x=0xe9, .y=0xc1, .sp=0x7a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x3b}, {.addr=0x324b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x324b, .value=0x66, .type=IO_READ},
        {.addr=0x324c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_013C) {
    const struct CPU_State initial_cpu = {.pc=0x9827, .a=0x11, .x=0xac, .y=0xa6, .sp=0x78, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x3f}, {.addr=0x9827, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9828, .a=0x11, .x=0xac, .y=0xa6, .sp=0x78, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x3f}, {.addr=0x9827, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9827, .value=0x66, .type=IO_READ},
        {.addr=0x9828, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_013D) {
    const struct CPU_State initial_cpu = {.pc=0xbacb, .a=0xc5, .x=0x32, .y=0x4c, .sp=0x55, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0xe1}, {.addr=0xbacb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbacc, .a=0xc5, .x=0x32, .y=0x4c, .sp=0x55, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xe1}, {.addr=0xbacb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbacb, .value=0x66, .type=IO_READ},
        {.addr=0xbacc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_013E) {
    const struct CPU_State initial_cpu = {.pc=0x4641, .a=0x1d, .x=0x70, .y=0x34, .sp=0x6b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x23}, {.addr=0x4641, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4642, .a=0x1d, .x=0x70, .y=0x34, .sp=0x6b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x23}, {.addr=0x4641, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4641, .value=0x66, .type=IO_READ},
        {.addr=0x4642, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_013F) {
    const struct CPU_State initial_cpu = {.pc=0xc395, .a=0xf5, .x=0xcf, .y=0x8a, .sp=0x32, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x54}, {.addr=0xc395, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc396, .a=0xf5, .x=0xcf, .y=0x8a, .sp=0x32, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x54}, {.addr=0xc395, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc395, .value=0x66, .type=IO_READ},
        {.addr=0xc396, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0140) {
    const struct CPU_State initial_cpu = {.pc=0xa8c8, .a=0x92, .x=0xa8, .y=0x88, .sp=0xcd, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x83}, {.addr=0xa8c8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa8c9, .a=0x92, .x=0xa8, .y=0x88, .sp=0xcd, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x83}, {.addr=0xa8c8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa8c8, .value=0x66, .type=IO_READ},
        {.addr=0xa8c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0141) {
    const struct CPU_State initial_cpu = {.pc=0x5787, .a=0x40, .x=0x87, .y=0xce, .sp=0x16, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x97}, {.addr=0x5787, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5788, .a=0x40, .x=0x87, .y=0xce, .sp=0x16, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x97}, {.addr=0x5787, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5787, .value=0x66, .type=IO_READ},
        {.addr=0x5788, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0142) {
    const struct CPU_State initial_cpu = {.pc=0x1383, .a=0x01, .x=0x27, .y=0x6e, .sp=0x8f, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x2f}, {.addr=0x1383, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1384, .a=0x01, .x=0x27, .y=0x6e, .sp=0x8f, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x2f}, {.addr=0x1383, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1383, .value=0x66, .type=IO_READ},
        {.addr=0x1384, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0143) {
    const struct CPU_State initial_cpu = {.pc=0xed03, .a=0x20, .x=0xe3, .y=0xd0, .sp=0xeb, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x71}, {.addr=0xed03, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xed04, .a=0x20, .x=0xe3, .y=0xd0, .sp=0xeb, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x71}, {.addr=0xed03, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xed03, .value=0x66, .type=IO_READ},
        {.addr=0xed04, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0144) {
    const struct CPU_State initial_cpu = {.pc=0xcbb5, .a=0xf9, .x=0xb7, .y=0x5e, .sp=0xb1, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0x6d}, {.addr=0xcbb5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcbb6, .a=0xf9, .x=0xb7, .y=0x5e, .sp=0xb1, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0x6d}, {.addr=0xcbb5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcbb5, .value=0x66, .type=IO_READ},
        {.addr=0xcbb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0145) {
    const struct CPU_State initial_cpu = {.pc=0xcc8d, .a=0x5c, .x=0xa7, .y=0x90, .sp=0x7f, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x75}, {.addr=0xcc8d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcc8e, .a=0x5c, .x=0xa7, .y=0x90, .sp=0x7f, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x75}, {.addr=0xcc8d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcc8d, .value=0x66, .type=IO_READ},
        {.addr=0xcc8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0146) {
    const struct CPU_State initial_cpu = {.pc=0x0e81, .a=0x06, .x=0x43, .y=0x43, .sp=0x4f, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0xd8}, {.addr=0x0e81, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0e82, .a=0x06, .x=0x43, .y=0x43, .sp=0x4f, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xd8}, {.addr=0x0e81, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0e81, .value=0x66, .type=IO_READ},
        {.addr=0x0e82, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0147) {
    const struct CPU_State initial_cpu = {.pc=0xc063, .a=0x32, .x=0x9b, .y=0x49, .sp=0x25, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0xc7}, {.addr=0xc063, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc064, .a=0x32, .x=0x9b, .y=0x49, .sp=0x25, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xc7}, {.addr=0xc063, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc063, .value=0x66, .type=IO_READ},
        {.addr=0xc064, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0148) {
    const struct CPU_State initial_cpu = {.pc=0xe0ab, .a=0x1a, .x=0x5f, .y=0x2e, .sp=0x8b, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x005f, .value=0x3d}, {.addr=0xe0ab, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe0ac, .a=0x1a, .x=0x5f, .y=0x2e, .sp=0x8b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x005f, .value=0x3d}, {.addr=0xe0ab, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe0ab, .value=0x66, .type=IO_READ},
        {.addr=0xe0ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x005f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0149) {
    const struct CPU_State initial_cpu = {.pc=0x633f, .a=0x7a, .x=0xba, .y=0x82, .sp=0x0a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0xd1}, {.addr=0x633f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6340, .a=0x7a, .x=0xba, .y=0x82, .sp=0x0a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0xd1}, {.addr=0x633f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x633f, .value=0x66, .type=IO_READ},
        {.addr=0x6340, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_014A) {
    const struct CPU_State initial_cpu = {.pc=0x3ce8, .a=0x1d, .x=0x40, .y=0xae, .sp=0x1a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x58}, {.addr=0x3ce8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3ce9, .a=0x1d, .x=0x40, .y=0xae, .sp=0x1a, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x58}, {.addr=0x3ce8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3ce8, .value=0x66, .type=IO_READ},
        {.addr=0x3ce9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_014B) {
    const struct CPU_State initial_cpu = {.pc=0x410a, .a=0xd9, .x=0x56, .y=0xe2, .sp=0x01, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0xb0}, {.addr=0x410a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x410b, .a=0xd9, .x=0x56, .y=0xe2, .sp=0x01, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0xb0}, {.addr=0x410a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x410a, .value=0x66, .type=IO_READ},
        {.addr=0x410b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_014C) {
    const struct CPU_State initial_cpu = {.pc=0x9197, .a=0x80, .x=0x05, .y=0x04, .sp=0x5d, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0xa2}, {.addr=0x9197, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9198, .a=0x80, .x=0x05, .y=0x04, .sp=0x5d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0xa2}, {.addr=0x9197, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9197, .value=0x66, .type=IO_READ},
        {.addr=0x9198, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_014D) {
    const struct CPU_State initial_cpu = {.pc=0xe159, .a=0x64, .x=0xe4, .y=0x76, .sp=0x86, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0xe3}, {.addr=0xe159, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe15a, .a=0x64, .x=0xe4, .y=0x76, .sp=0x86, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0xe3}, {.addr=0xe159, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe159, .value=0x66, .type=IO_READ},
        {.addr=0xe15a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_014E) {
    const struct CPU_State initial_cpu = {.pc=0xf8e5, .a=0xba, .x=0x1f, .y=0x85, .sp=0xb8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x1a}, {.addr=0xf8e5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf8e6, .a=0xba, .x=0x1f, .y=0x85, .sp=0xb8, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x1a}, {.addr=0xf8e5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf8e5, .value=0x66, .type=IO_READ},
        {.addr=0xf8e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_014F) {
    const struct CPU_State initial_cpu = {.pc=0x4e83, .a=0x8b, .x=0x30, .y=0x2a, .sp=0x8f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0030, .value=0x81}, {.addr=0x4e83, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4e84, .a=0x8b, .x=0x30, .y=0x2a, .sp=0x8f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0030, .value=0x81}, {.addr=0x4e83, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4e83, .value=0x66, .type=IO_READ},
        {.addr=0x4e84, .value=DUMMY, .type=IO_READ},
        {.addr=0x0030, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0150) {
    const struct CPU_State initial_cpu = {.pc=0x1fcd, .a=0x65, .x=0xb8, .y=0x3d, .sp=0xc1, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x5c}, {.addr=0x1fcd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1fce, .a=0x65, .x=0xb8, .y=0x3d, .sp=0xc1, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x5c}, {.addr=0x1fcd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1fcd, .value=0x66, .type=IO_READ},
        {.addr=0x1fce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0151) {
    const struct CPU_State initial_cpu = {.pc=0x6569, .a=0x73, .x=0xb1, .y=0x6c, .sp=0x08, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x6569, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x656a, .a=0x73, .x=0xb1, .y=0x6c, .sp=0x08, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x6569, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6569, .value=0x66, .type=IO_READ},
        {.addr=0x656a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0152) {
    const struct CPU_State initial_cpu = {.pc=0xb788, .a=0xda, .x=0x22, .y=0x3e, .sp=0x41, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xc6}, {.addr=0xb788, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb789, .a=0xda, .x=0x22, .y=0x3e, .sp=0x41, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xc6}, {.addr=0xb788, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb788, .value=0x66, .type=IO_READ},
        {.addr=0xb789, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0153) {
    const struct CPU_State initial_cpu = {.pc=0x1e91, .a=0x48, .x=0x0b, .y=0x62, .sp=0xde, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0xec}, {.addr=0x1e91, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1e92, .a=0x48, .x=0x0b, .y=0x62, .sp=0xde, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0xec}, {.addr=0x1e91, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1e91, .value=0x66, .type=IO_READ},
        {.addr=0x1e92, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0154) {
    const struct CPU_State initial_cpu = {.pc=0x534c, .a=0x00, .x=0x43, .y=0x33, .sp=0x38, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x62}, {.addr=0x534c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x534d, .a=0x00, .x=0x43, .y=0x33, .sp=0x38, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x62}, {.addr=0x534c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x534c, .value=0x66, .type=IO_READ},
        {.addr=0x534d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0155) {
    const struct CPU_State initial_cpu = {.pc=0x3776, .a=0x57, .x=0xea, .y=0x42, .sp=0x3b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x62}, {.addr=0x3776, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3777, .a=0x57, .x=0xea, .y=0x42, .sp=0x3b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x62}, {.addr=0x3776, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3776, .value=0x66, .type=IO_READ},
        {.addr=0x3777, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0156) {
    const struct CPU_State initial_cpu = {.pc=0x969d, .a=0xc7, .x=0x22, .y=0xd8, .sp=0x3b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x70}, {.addr=0x969d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x969e, .a=0xc7, .x=0x22, .y=0xd8, .sp=0x3b, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x70}, {.addr=0x969d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x969d, .value=0x66, .type=IO_READ},
        {.addr=0x969e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0157) {
    const struct CPU_State initial_cpu = {.pc=0xde7e, .a=0xf1, .x=0x91, .y=0xcf, .sp=0x84, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x99}, {.addr=0xde7e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xde7f, .a=0xf1, .x=0x91, .y=0xcf, .sp=0x84, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0x99}, {.addr=0xde7e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xde7e, .value=0x66, .type=IO_READ},
        {.addr=0xde7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0158) {
    const struct CPU_State initial_cpu = {.pc=0x918d, .a=0x8d, .x=0x16, .y=0xca, .sp=0x7e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xfd}, {.addr=0x918d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x918e, .a=0x8d, .x=0x16, .y=0xca, .sp=0x7e, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xfd}, {.addr=0x918d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x918d, .value=0x66, .type=IO_READ},
        {.addr=0x918e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0159) {
    const struct CPU_State initial_cpu = {.pc=0xa7dc, .a=0x65, .x=0xaf, .y=0x47, .sp=0x75, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0xc9}, {.addr=0xa7dc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa7dd, .a=0x65, .x=0xaf, .y=0x47, .sp=0x75, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xc9}, {.addr=0xa7dc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa7dc, .value=0x66, .type=IO_READ},
        {.addr=0xa7dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_015A) {
    const struct CPU_State initial_cpu = {.pc=0xa5ad, .a=0x8a, .x=0x03, .y=0x8c, .sp=0xcb, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0003, .value=0x1d}, {.addr=0xa5ad, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa5ae, .a=0x8a, .x=0x03, .y=0x8c, .sp=0xcb, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0003, .value=0x1d}, {.addr=0xa5ad, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa5ad, .value=0x66, .type=IO_READ},
        {.addr=0xa5ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0003, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_015B) {
    const struct CPU_State initial_cpu = {.pc=0xbc11, .a=0xa6, .x=0x74, .y=0x94, .sp=0x09, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x28}, {.addr=0xbc11, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbc12, .a=0xa6, .x=0x74, .y=0x94, .sp=0x09, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x28}, {.addr=0xbc11, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbc11, .value=0x66, .type=IO_READ},
        {.addr=0xbc12, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_015C) {
    const struct CPU_State initial_cpu = {.pc=0x2cbf, .a=0x5d, .x=0x7a, .y=0xf9, .sp=0xa6, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0xe7}, {.addr=0x2cbf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2cc0, .a=0x5d, .x=0x7a, .y=0xf9, .sp=0xa6, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xe7}, {.addr=0x2cbf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2cbf, .value=0x66, .type=IO_READ},
        {.addr=0x2cc0, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_015D) {
    const struct CPU_State initial_cpu = {.pc=0x6ca4, .a=0xf7, .x=0x38, .y=0x51, .sp=0x0c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x68}, {.addr=0x6ca4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6ca5, .a=0xf7, .x=0x38, .y=0x51, .sp=0x0c, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x68}, {.addr=0x6ca4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6ca4, .value=0x66, .type=IO_READ},
        {.addr=0x6ca5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_015E) {
    const struct CPU_State initial_cpu = {.pc=0x58cd, .a=0x08, .x=0xb9, .y=0xfe, .sp=0x06, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x16}, {.addr=0x58cd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x58ce, .a=0x08, .x=0xb9, .y=0xfe, .sp=0x06, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x16}, {.addr=0x58cd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x58cd, .value=0x66, .type=IO_READ},
        {.addr=0x58ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_015F) {
    const struct CPU_State initial_cpu = {.pc=0x1acc, .a=0x8e, .x=0x3d, .y=0xdd, .sp=0x8b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0xb0}, {.addr=0x1acc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1acd, .a=0x8e, .x=0x3d, .y=0xdd, .sp=0x8b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0xb0}, {.addr=0x1acc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1acc, .value=0x66, .type=IO_READ},
        {.addr=0x1acd, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0160) {
    const struct CPU_State initial_cpu = {.pc=0xb84d, .a=0xab, .x=0x3e, .y=0xdd, .sp=0xb9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x003e, .value=0xc3}, {.addr=0xb84d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb84e, .a=0xab, .x=0x3e, .y=0xdd, .sp=0xb9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x003e, .value=0xc3}, {.addr=0xb84d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb84d, .value=0x66, .type=IO_READ},
        {.addr=0xb84e, .value=DUMMY, .type=IO_READ},
        {.addr=0x003e, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0161) {
    const struct CPU_State initial_cpu = {.pc=0xdaa0, .a=0x21, .x=0xbf, .y=0x55, .sp=0x34, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x5d}, {.addr=0xdaa0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdaa1, .a=0x21, .x=0xbf, .y=0x55, .sp=0x34, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x5d}, {.addr=0xdaa0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdaa0, .value=0x66, .type=IO_READ},
        {.addr=0xdaa1, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0162) {
    const struct CPU_State initial_cpu = {.pc=0x513a, .a=0x96, .x=0x28, .y=0x78, .sp=0x6a, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xff}, {.addr=0x513a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x513b, .a=0x96, .x=0x28, .y=0x78, .sp=0x6a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xff}, {.addr=0x513a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x513a, .value=0x66, .type=IO_READ},
        {.addr=0x513b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0163) {
    const struct CPU_State initial_cpu = {.pc=0xb3fe, .a=0x34, .x=0xc3, .y=0xae, .sp=0x51, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xd3}, {.addr=0xb3fe, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb3ff, .a=0x34, .x=0xc3, .y=0xae, .sp=0x51, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xd3}, {.addr=0xb3fe, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb3fe, .value=0x66, .type=IO_READ},
        {.addr=0xb3ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0164) {
    const struct CPU_State initial_cpu = {.pc=0x62f4, .a=0xfc, .x=0xd5, .y=0x4a, .sp=0x7f, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xac}, {.addr=0x62f4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x62f5, .a=0xfc, .x=0xd5, .y=0x4a, .sp=0x7f, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xac}, {.addr=0x62f4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x62f4, .value=0x66, .type=IO_READ},
        {.addr=0x62f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0165) {
    const struct CPU_State initial_cpu = {.pc=0x3f66, .a=0x56, .x=0x8a, .y=0xc1, .sp=0x81, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0xca}, {.addr=0x3f66, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3f67, .a=0x56, .x=0x8a, .y=0xc1, .sp=0x81, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xca}, {.addr=0x3f66, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3f66, .value=0x66, .type=IO_READ},
        {.addr=0x3f67, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0166) {
    const struct CPU_State initial_cpu = {.pc=0x901d, .a=0xa6, .x=0x7c, .y=0xee, .sp=0x3b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x90}, {.addr=0x901d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x901e, .a=0xa6, .x=0x7c, .y=0xee, .sp=0x3b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x90}, {.addr=0x901d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x901d, .value=0x66, .type=IO_READ},
        {.addr=0x901e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0168) {
    const struct CPU_State initial_cpu = {.pc=0x5f86, .a=0x0f, .x=0x95, .y=0xbc, .sp=0x81, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x68}, {.addr=0x5f86, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5f87, .a=0x0f, .x=0x95, .y=0xbc, .sp=0x81, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x68}, {.addr=0x5f86, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5f86, .value=0x66, .type=IO_READ},
        {.addr=0x5f87, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0169) {
    const struct CPU_State initial_cpu = {.pc=0x0ded, .a=0x21, .x=0x89, .y=0x4c, .sp=0x81, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xe3}, {.addr=0x0ded, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0dee, .a=0x21, .x=0x89, .y=0x4c, .sp=0x81, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xe3}, {.addr=0x0ded, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0ded, .value=0x66, .type=IO_READ},
        {.addr=0x0dee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_016A) {
    const struct CPU_State initial_cpu = {.pc=0x3e97, .a=0xff, .x=0xa4, .y=0x02, .sp=0xf1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x91}, {.addr=0x3e97, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3e98, .a=0xff, .x=0xa4, .y=0x02, .sp=0xf1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x91}, {.addr=0x3e97, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3e97, .value=0x66, .type=IO_READ},
        {.addr=0x3e98, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_016B) {
    const struct CPU_State initial_cpu = {.pc=0xd9c0, .a=0x41, .x=0x97, .y=0xd7, .sp=0x15, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0xb3}, {.addr=0xd9c0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd9c1, .a=0x41, .x=0x97, .y=0xd7, .sp=0x15, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0xb3}, {.addr=0xd9c0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd9c0, .value=0x66, .type=IO_READ},
        {.addr=0xd9c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_016C) {
    const struct CPU_State initial_cpu = {.pc=0xcb2c, .a=0xb8, .x=0x8d, .y=0xa9, .sp=0x7a, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x008d, .value=0xa2}, {.addr=0xcb2c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcb2d, .a=0xb8, .x=0x8d, .y=0xa9, .sp=0x7a, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x008d, .value=0xa2}, {.addr=0xcb2c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcb2c, .value=0x66, .type=IO_READ},
        {.addr=0xcb2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x008d, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_016D) {
    const struct CPU_State initial_cpu = {.pc=0x0f17, .a=0x19, .x=0xef, .y=0x4b, .sp=0x46, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x8e}, {.addr=0x0f17, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0f18, .a=0x19, .x=0xef, .y=0x4b, .sp=0x46, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x8e}, {.addr=0x0f17, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0f17, .value=0x66, .type=IO_READ},
        {.addr=0x0f18, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_016E) {
    const struct CPU_State initial_cpu = {.pc=0xe674, .a=0x66, .x=0xf9, .y=0x45, .sp=0xce, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0xfe}, {.addr=0xe674, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe675, .a=0x66, .x=0xf9, .y=0x45, .sp=0xce, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0xfe}, {.addr=0xe674, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe674, .value=0x66, .type=IO_READ},
        {.addr=0xe675, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_016F) {
    const struct CPU_State initial_cpu = {.pc=0x0b0c, .a=0x74, .x=0x5b, .y=0xf6, .sp=0x7c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x9c}, {.addr=0x0b0c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0b0d, .a=0x74, .x=0x5b, .y=0xf6, .sp=0x7c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x9c}, {.addr=0x0b0c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0b0c, .value=0x66, .type=IO_READ},
        {.addr=0x0b0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0170) {
    const struct CPU_State initial_cpu = {.pc=0xd9b2, .a=0x80, .x=0x16, .y=0xa2, .sp=0x25, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xd8}, {.addr=0xd9b2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd9b3, .a=0x80, .x=0x16, .y=0xa2, .sp=0x25, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xd8}, {.addr=0xd9b2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd9b2, .value=0x66, .type=IO_READ},
        {.addr=0xd9b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0171) {
    const struct CPU_State initial_cpu = {.pc=0xa4dd, .a=0xc2, .x=0x53, .y=0x22, .sp=0x5f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x90}, {.addr=0xa4dd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa4de, .a=0xc2, .x=0x53, .y=0x22, .sp=0x5f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x90}, {.addr=0xa4dd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa4dd, .value=0x66, .type=IO_READ},
        {.addr=0xa4de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0172) {
    const struct CPU_State initial_cpu = {.pc=0x4d9b, .a=0x64, .x=0x0a, .y=0x21, .sp=0x73, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x57}, {.addr=0x4d9b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4d9c, .a=0x64, .x=0x0a, .y=0x21, .sp=0x73, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x57}, {.addr=0x4d9b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4d9b, .value=0x66, .type=IO_READ},
        {.addr=0x4d9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0173) {
    const struct CPU_State initial_cpu = {.pc=0x80de, .a=0xa6, .x=0x7c, .y=0x59, .sp=0x4f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x41}, {.addr=0x80de, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x80df, .a=0xa6, .x=0x7c, .y=0x59, .sp=0x4f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x41}, {.addr=0x80de, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x80de, .value=0x66, .type=IO_READ},
        {.addr=0x80df, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0174) {
    const struct CPU_State initial_cpu = {.pc=0xf956, .a=0xc0, .x=0x70, .y=0x67, .sp=0xbd, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0070, .value=0x17}, {.addr=0xf956, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf957, .a=0xc0, .x=0x70, .y=0x67, .sp=0xbd, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0070, .value=0x17}, {.addr=0xf956, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf956, .value=0x66, .type=IO_READ},
        {.addr=0xf957, .value=DUMMY, .type=IO_READ},
        {.addr=0x0070, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0175) {
    const struct CPU_State initial_cpu = {.pc=0xc301, .a=0x76, .x=0x45, .y=0xa5, .sp=0xf3, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x2c}, {.addr=0xc301, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc302, .a=0x76, .x=0x45, .y=0xa5, .sp=0xf3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x2c}, {.addr=0xc301, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc301, .value=0x66, .type=IO_READ},
        {.addr=0xc302, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0176) {
    const struct CPU_State initial_cpu = {.pc=0x7902, .a=0xe5, .x=0xac, .y=0xe7, .sp=0xc4, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xc1}, {.addr=0x7902, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7903, .a=0xe5, .x=0xac, .y=0xe7, .sp=0xc4, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xc1}, {.addr=0x7902, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7902, .value=0x66, .type=IO_READ},
        {.addr=0x7903, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0177) {
    const struct CPU_State initial_cpu = {.pc=0x3d9c, .a=0x87, .x=0x1d, .y=0x1e, .sp=0xf1, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0x7d}, {.addr=0x3d9c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3d9d, .a=0x87, .x=0x1d, .y=0x1e, .sp=0xf1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0x7d}, {.addr=0x3d9c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3d9c, .value=0x66, .type=IO_READ},
        {.addr=0x3d9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0178) {
    const struct CPU_State initial_cpu = {.pc=0x40ac, .a=0x21, .x=0x1e, .y=0x17, .sp=0xa8, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x1e}, {.addr=0x40ac, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x40ad, .a=0x21, .x=0x1e, .y=0x17, .sp=0xa8, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0x1e}, {.addr=0x40ac, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x40ac, .value=0x66, .type=IO_READ},
        {.addr=0x40ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0179) {
    const struct CPU_State initial_cpu = {.pc=0xe030, .a=0x62, .x=0xbd, .y=0x78, .sp=0x42, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x45}, {.addr=0xe030, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe031, .a=0x62, .x=0xbd, .y=0x78, .sp=0x42, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x45}, {.addr=0xe030, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe030, .value=0x66, .type=IO_READ},
        {.addr=0xe031, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_017A) {
    const struct CPU_State initial_cpu = {.pc=0x2db8, .a=0x0e, .x=0x14, .y=0x35, .sp=0x0c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x56}, {.addr=0x2db8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2db9, .a=0x0e, .x=0x14, .y=0x35, .sp=0x0c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x56}, {.addr=0x2db8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2db8, .value=0x66, .type=IO_READ},
        {.addr=0x2db9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_017B) {
    const struct CPU_State initial_cpu = {.pc=0xbcea, .a=0xc8, .x=0x83, .y=0xdc, .sp=0x58, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0x4b}, {.addr=0xbcea, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbceb, .a=0xc8, .x=0x83, .y=0xdc, .sp=0x58, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0x4b}, {.addr=0xbcea, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbcea, .value=0x66, .type=IO_READ},
        {.addr=0xbceb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_017C) {
    const struct CPU_State initial_cpu = {.pc=0xcfeb, .a=0xc7, .x=0xe5, .y=0x20, .sp=0x82, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x0b}, {.addr=0xcfeb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcfec, .a=0xc7, .x=0xe5, .y=0x20, .sp=0x82, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x0b}, {.addr=0xcfeb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcfeb, .value=0x66, .type=IO_READ},
        {.addr=0xcfec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_017D) {
    const struct CPU_State initial_cpu = {.pc=0x1eaa, .a=0xcd, .x=0xed, .y=0xcf, .sp=0x30, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ed, .value=0x19}, {.addr=0x1eaa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1eab, .a=0xcd, .x=0xed, .y=0xcf, .sp=0x30, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01ed, .value=0x19}, {.addr=0x1eaa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1eaa, .value=0x66, .type=IO_READ},
        {.addr=0x1eab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ed, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_017E) {
    const struct CPU_State initial_cpu = {.pc=0xe4d6, .a=0x7f, .x=0x53, .y=0x1c, .sp=0x8e, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0053, .value=0x01}, {.addr=0xe4d6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe4d7, .a=0x7f, .x=0x53, .y=0x1c, .sp=0x8e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0053, .value=0x01}, {.addr=0xe4d6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe4d6, .value=0x66, .type=IO_READ},
        {.addr=0xe4d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0053, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_017F) {
    const struct CPU_State initial_cpu = {.pc=0xc5b1, .a=0x25, .x=0x78, .y=0x9a, .sp=0xf8, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0xb8}, {.addr=0xc5b1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc5b2, .a=0x25, .x=0x78, .y=0x9a, .sp=0xf8, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0xb8}, {.addr=0xc5b1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc5b1, .value=0x66, .type=IO_READ},
        {.addr=0xc5b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0180) {
    const struct CPU_State initial_cpu = {.pc=0x7a0d, .a=0x62, .x=0x9a, .y=0xc2, .sp=0x5f, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x76}, {.addr=0x7a0d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7a0e, .a=0x62, .x=0x9a, .y=0xc2, .sp=0x5f, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x76}, {.addr=0x7a0d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7a0d, .value=0x66, .type=IO_READ},
        {.addr=0x7a0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0181) {
    const struct CPU_State initial_cpu = {.pc=0xd4b3, .a=0x82, .x=0xf8, .y=0xc3, .sp=0xc7, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xa4}, {.addr=0xd4b3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd4b4, .a=0x82, .x=0xf8, .y=0xc3, .sp=0xc7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xa4}, {.addr=0xd4b3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd4b3, .value=0x66, .type=IO_READ},
        {.addr=0xd4b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0182) {
    const struct CPU_State initial_cpu = {.pc=0x69a9, .a=0x81, .x=0x4d, .y=0xc1, .sp=0x4a, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x29}, {.addr=0x69a9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x69aa, .a=0x81, .x=0x4d, .y=0xc1, .sp=0x4a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x29}, {.addr=0x69a9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x69a9, .value=0x66, .type=IO_READ},
        {.addr=0x69aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0183) {
    const struct CPU_State initial_cpu = {.pc=0x4561, .a=0xe1, .x=0xb1, .y=0x1a, .sp=0x53, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x71}, {.addr=0x4561, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4562, .a=0xe1, .x=0xb1, .y=0x1a, .sp=0x53, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x71}, {.addr=0x4561, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4561, .value=0x66, .type=IO_READ},
        {.addr=0x4562, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0184) {
    const struct CPU_State initial_cpu = {.pc=0x174e, .a=0x4e, .x=0xa6, .y=0x9e, .sp=0xdd, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x90}, {.addr=0x174e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x174f, .a=0x4e, .x=0xa6, .y=0x9e, .sp=0xdd, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x90}, {.addr=0x174e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x174e, .value=0x66, .type=IO_READ},
        {.addr=0x174f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0185) {
    const struct CPU_State initial_cpu = {.pc=0x7849, .a=0x30, .x=0x45, .y=0x5a, .sp=0x1f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xdb}, {.addr=0x7849, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x784a, .a=0x30, .x=0x45, .y=0x5a, .sp=0x1f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xdb}, {.addr=0x7849, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7849, .value=0x66, .type=IO_READ},
        {.addr=0x784a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0186) {
    const struct CPU_State initial_cpu = {.pc=0x0789, .a=0xb1, .x=0x8e, .y=0x8c, .sp=0xc9, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x48}, {.addr=0x0789, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x078a, .a=0xb1, .x=0x8e, .y=0x8c, .sp=0xc9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x48}, {.addr=0x0789, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0789, .value=0x66, .type=IO_READ},
        {.addr=0x078a, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0187) {
    const struct CPU_State initial_cpu = {.pc=0x0a97, .a=0x8e, .x=0x06, .y=0xff, .sp=0xbd, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x76}, {.addr=0x0a97, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0a98, .a=0x8e, .x=0x06, .y=0xff, .sp=0xbd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x76}, {.addr=0x0a97, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0a97, .value=0x66, .type=IO_READ},
        {.addr=0x0a98, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0188) {
    const struct CPU_State initial_cpu = {.pc=0xa6f5, .a=0xd3, .x=0x69, .y=0xa6, .sp=0xa2, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0069, .value=0x14}, {.addr=0xa6f5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa6f6, .a=0xd3, .x=0x69, .y=0xa6, .sp=0xa2, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0069, .value=0x14}, {.addr=0xa6f5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa6f5, .value=0x66, .type=IO_READ},
        {.addr=0xa6f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0069, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0189) {
    const struct CPU_State initial_cpu = {.pc=0xd174, .a=0x8c, .x=0x0f, .y=0x2b, .sp=0x8c, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0x5d}, {.addr=0xd174, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd175, .a=0x8c, .x=0x0f, .y=0x2b, .sp=0x8c, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0x5d}, {.addr=0xd174, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd174, .value=0x66, .type=IO_READ},
        {.addr=0xd175, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_018A) {
    const struct CPU_State initial_cpu = {.pc=0x02db, .a=0xc3, .x=0xdb, .y=0x1b, .sp=0xdd, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x00db, .value=0xe5}, {.addr=0x02db, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x02dc, .a=0xc3, .x=0xdb, .y=0x1b, .sp=0xdd, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x00db, .value=0xe5}, {.addr=0x02db, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x02db, .value=0x66, .type=IO_READ},
        {.addr=0x02dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00db, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_018B) {
    const struct CPU_State initial_cpu = {.pc=0x7fb6, .a=0xd9, .x=0x24, .y=0x89, .sp=0x9b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x0a}, {.addr=0x7fb6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7fb7, .a=0xd9, .x=0x24, .y=0x89, .sp=0x9b, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x0a}, {.addr=0x7fb6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7fb6, .value=0x66, .type=IO_READ},
        {.addr=0x7fb7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_018C) {
    const struct CPU_State initial_cpu = {.pc=0xf692, .a=0xfc, .x=0xac, .y=0x56, .sp=0x52, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0xe6}, {.addr=0xf692, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf693, .a=0xfc, .x=0xac, .y=0x56, .sp=0x52, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xe6}, {.addr=0xf692, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf692, .value=0x66, .type=IO_READ},
        {.addr=0xf693, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_018D) {
    const struct CPU_State initial_cpu = {.pc=0xbad0, .a=0x24, .x=0x3d, .y=0xb1, .sp=0x6a, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x7a}, {.addr=0xbad0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbad1, .a=0x24, .x=0x3d, .y=0xb1, .sp=0x6a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x7a}, {.addr=0xbad0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbad0, .value=0x66, .type=IO_READ},
        {.addr=0xbad1, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_018E) {
    const struct CPU_State initial_cpu = {.pc=0xd332, .a=0xd6, .x=0xbf, .y=0x7a, .sp=0x91, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xb0}, {.addr=0xd332, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd333, .a=0xd6, .x=0xbf, .y=0x7a, .sp=0x91, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xb0}, {.addr=0xd332, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd332, .value=0x66, .type=IO_READ},
        {.addr=0xd333, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_018F) {
    const struct CPU_State initial_cpu = {.pc=0xd170, .a=0xda, .x=0x40, .y=0x1f, .sp=0xdf, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x81}, {.addr=0xd170, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd171, .a=0xda, .x=0x40, .y=0x1f, .sp=0xdf, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x81}, {.addr=0xd170, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd170, .value=0x66, .type=IO_READ},
        {.addr=0xd171, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0190) {
    const struct CPU_State initial_cpu = {.pc=0xcf55, .a=0xb1, .x=0xbb, .y=0x14, .sp=0x88, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x16}, {.addr=0xcf55, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcf56, .a=0xb1, .x=0xbb, .y=0x14, .sp=0x88, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x16}, {.addr=0xcf55, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcf55, .value=0x66, .type=IO_READ},
        {.addr=0xcf56, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0191) {
    const struct CPU_State initial_cpu = {.pc=0xc93e, .a=0xc4, .x=0x04, .y=0x0d, .sp=0x08, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0xf0}, {.addr=0xc93e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc93f, .a=0xc4, .x=0x04, .y=0x0d, .sp=0x08, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0xf0}, {.addr=0xc93e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc93e, .value=0x66, .type=IO_READ},
        {.addr=0xc93f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0192) {
    const struct CPU_State initial_cpu = {.pc=0x4984, .a=0xd9, .x=0xf9, .y=0x90, .sp=0xcb, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x1d}, {.addr=0x4984, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4985, .a=0xd9, .x=0xf9, .y=0x90, .sp=0xcb, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x1d}, {.addr=0x4984, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4984, .value=0x66, .type=IO_READ},
        {.addr=0x4985, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0193) {
    const struct CPU_State initial_cpu = {.pc=0x92bf, .a=0x49, .x=0xd3, .y=0x98, .sp=0xb9, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x40}, {.addr=0x92bf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x92c0, .a=0x49, .x=0xd3, .y=0x98, .sp=0xb9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x40}, {.addr=0x92bf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x92bf, .value=0x66, .type=IO_READ},
        {.addr=0x92c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0194) {
    const struct CPU_State initial_cpu = {.pc=0xaa22, .a=0x43, .x=0x59, .y=0x16, .sp=0x8c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x35}, {.addr=0xaa22, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xaa23, .a=0x43, .x=0x59, .y=0x16, .sp=0x8c, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x35}, {.addr=0xaa22, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xaa22, .value=0x66, .type=IO_READ},
        {.addr=0xaa23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0196) {
    const struct CPU_State initial_cpu = {.pc=0xc9e5, .a=0xf5, .x=0x34, .y=0x42, .sp=0xfc, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xe7}, {.addr=0xc9e5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc9e6, .a=0xf5, .x=0x34, .y=0x42, .sp=0xfc, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xe7}, {.addr=0xc9e5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc9e5, .value=0x66, .type=IO_READ},
        {.addr=0xc9e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0197) {
    const struct CPU_State initial_cpu = {.pc=0xf6c2, .a=0xce, .x=0x46, .y=0x3a, .sp=0x1b, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0046, .value=0xd2}, {.addr=0xf6c2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf6c3, .a=0xce, .x=0x46, .y=0x3a, .sp=0x1b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0046, .value=0xd2}, {.addr=0xf6c2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf6c2, .value=0x66, .type=IO_READ},
        {.addr=0xf6c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0046, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0198) {
    const struct CPU_State initial_cpu = {.pc=0x613d, .a=0x76, .x=0x54, .y=0xcd, .sp=0xa1, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0054, .value=0x06}, {.addr=0x613d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x613e, .a=0x76, .x=0x54, .y=0xcd, .sp=0xa1, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0054, .value=0x06}, {.addr=0x613d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x613d, .value=0x66, .type=IO_READ},
        {.addr=0x613e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0054, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0199) {
    const struct CPU_State initial_cpu = {.pc=0x76ae, .a=0xe5, .x=0xbf, .y=0x21, .sp=0x2b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0xa9}, {.addr=0x76ae, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x76af, .a=0xe5, .x=0xbf, .y=0x21, .sp=0x2b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0xa9}, {.addr=0x76ae, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x76ae, .value=0x66, .type=IO_READ},
        {.addr=0x76af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_019A) {
    const struct CPU_State initial_cpu = {.pc=0xdf02, .a=0x4a, .x=0xca, .y=0xa2, .sp=0x5c, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x47}, {.addr=0xdf02, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdf03, .a=0x4a, .x=0xca, .y=0xa2, .sp=0x5c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x47}, {.addr=0xdf02, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdf02, .value=0x66, .type=IO_READ},
        {.addr=0xdf03, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_019B) {
    const struct CPU_State initial_cpu = {.pc=0xd34e, .a=0xc8, .x=0xb6, .y=0x5a, .sp=0x60, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0xf6}, {.addr=0xd34e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd34f, .a=0xc8, .x=0xb6, .y=0x5a, .sp=0x60, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0xf6}, {.addr=0xd34e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd34e, .value=0x66, .type=IO_READ},
        {.addr=0xd34f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_019C) {
    const struct CPU_State initial_cpu = {.pc=0xdc58, .a=0x56, .x=0x3a, .y=0xa5, .sp=0xb8, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x55}, {.addr=0xdc58, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdc59, .a=0x56, .x=0x3a, .y=0xa5, .sp=0xb8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x55}, {.addr=0xdc58, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdc58, .value=0x66, .type=IO_READ},
        {.addr=0xdc59, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_019D) {
    const struct CPU_State initial_cpu = {.pc=0xd542, .a=0x4a, .x=0xe8, .y=0x9d, .sp=0xfc, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x4b}, {.addr=0xd542, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd543, .a=0x4a, .x=0xe8, .y=0x9d, .sp=0xfc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x4b}, {.addr=0xd542, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd542, .value=0x66, .type=IO_READ},
        {.addr=0xd543, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_019E) {
    const struct CPU_State initial_cpu = {.pc=0x5d02, .a=0xcf, .x=0x37, .y=0x3f, .sp=0xbe, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0x86}, {.addr=0x5d02, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5d03, .a=0xcf, .x=0x37, .y=0x3f, .sp=0xbe, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0x86}, {.addr=0x5d02, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5d02, .value=0x66, .type=IO_READ},
        {.addr=0x5d03, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_019F) {
    const struct CPU_State initial_cpu = {.pc=0x3d36, .a=0xfd, .x=0xcf, .y=0x2b, .sp=0xe4, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00cf, .value=0x79}, {.addr=0x3d36, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3d37, .a=0xfd, .x=0xcf, .y=0x2b, .sp=0xe4, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00cf, .value=0x79}, {.addr=0x3d36, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3d36, .value=0x66, .type=IO_READ},
        {.addr=0x3d37, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cf, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x0599, .a=0xc0, .x=0x15, .y=0x1b, .sp=0x87, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0115, .value=0xe4}, {.addr=0x0599, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x059a, .a=0xc0, .x=0x15, .y=0x1b, .sp=0x87, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0115, .value=0xe4}, {.addr=0x0599, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0599, .value=0x66, .type=IO_READ},
        {.addr=0x059a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0115, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x4df0, .a=0xd5, .x=0x0f, .y=0xa7, .sp=0xaa, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x65}, {.addr=0x4df0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4df1, .a=0xd5, .x=0x0f, .y=0xa7, .sp=0xaa, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x65}, {.addr=0x4df0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4df0, .value=0x66, .type=IO_READ},
        {.addr=0x4df1, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xadf2, .a=0x83, .x=0x92, .y=0x15, .sp=0x4a, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x64}, {.addr=0xadf2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xadf3, .a=0x83, .x=0x92, .y=0x15, .sp=0x4a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x64}, {.addr=0xadf2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xadf2, .value=0x66, .type=IO_READ},
        {.addr=0xadf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xada9, .a=0x6d, .x=0x48, .y=0xee, .sp=0x0c, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x0d}, {.addr=0xada9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xadaa, .a=0x6d, .x=0x48, .y=0xee, .sp=0x0c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x0d}, {.addr=0xada9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xada9, .value=0x66, .type=IO_READ},
        {.addr=0xadaa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x34cd, .a=0xf8, .x=0x2e, .y=0x5f, .sp=0x52, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0x84}, {.addr=0x34cd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x34ce, .a=0xf8, .x=0x2e, .y=0x5f, .sp=0x52, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0x84}, {.addr=0x34cd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x34cd, .value=0x66, .type=IO_READ},
        {.addr=0x34ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x1e88, .a=0x37, .x=0x3a, .y=0x4b, .sp=0xb8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xde}, {.addr=0x1e88, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1e89, .a=0x37, .x=0x3a, .y=0x4b, .sp=0xb8, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xde}, {.addr=0x1e88, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1e88, .value=0x66, .type=IO_READ},
        {.addr=0x1e89, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x9299, .a=0x5e, .x=0x6c, .y=0xbb, .sp=0xd4, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xe2}, {.addr=0x9299, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x929a, .a=0x5e, .x=0x6c, .y=0xbb, .sp=0xd4, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xe2}, {.addr=0x9299, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9299, .value=0x66, .type=IO_READ},
        {.addr=0x929a, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xe4ba, .a=0x9b, .x=0x1c, .y=0xfa, .sp=0x14, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0x6b}, {.addr=0xe4ba, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe4bb, .a=0x9b, .x=0x1c, .y=0xfa, .sp=0x14, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0x6b}, {.addr=0xe4ba, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe4ba, .value=0x66, .type=IO_READ},
        {.addr=0xe4bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x28ed, .a=0x7c, .x=0x85, .y=0xad, .sp=0xd6, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0xb7}, {.addr=0x28ed, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x28ee, .a=0x7c, .x=0x85, .y=0xad, .sp=0xd6, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0xb7}, {.addr=0x28ed, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x28ed, .value=0x66, .type=IO_READ},
        {.addr=0x28ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x2f53, .a=0x75, .x=0x30, .y=0xaf, .sp=0xe9, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x77}, {.addr=0x2f53, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2f54, .a=0x75, .x=0x30, .y=0xaf, .sp=0xe9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x77}, {.addr=0x2f53, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2f53, .value=0x66, .type=IO_READ},
        {.addr=0x2f54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xff3e, .a=0x75, .x=0x50, .y=0x8c, .sp=0x46, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0xb2}, {.addr=0xff3e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xff3f, .a=0x75, .x=0x50, .y=0x8c, .sp=0x46, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xb2}, {.addr=0xff3e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xff3e, .value=0x66, .type=IO_READ},
        {.addr=0xff3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x21ff, .a=0x41, .x=0xb1, .y=0x97, .sp=0x62, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x50}, {.addr=0x21ff, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2200, .a=0x41, .x=0xb1, .y=0x97, .sp=0x62, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x50}, {.addr=0x21ff, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x21ff, .value=0x66, .type=IO_READ},
        {.addr=0x2200, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x3eff, .a=0x58, .x=0xf1, .y=0x4a, .sp=0xb7, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x6a}, {.addr=0x3eff, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3f00, .a=0x58, .x=0xf1, .y=0x4a, .sp=0xb7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x6a}, {.addr=0x3eff, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3eff, .value=0x66, .type=IO_READ},
        {.addr=0x3f00, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xcbed, .a=0xb9, .x=0xdd, .y=0xe5, .sp=0x02, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0xf5}, {.addr=0xcbed, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcbee, .a=0xb9, .x=0xdd, .y=0xe5, .sp=0x02, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0xf5}, {.addr=0xcbed, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcbed, .value=0x66, .type=IO_READ},
        {.addr=0xcbee, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x8af0, .a=0xa9, .x=0x1d, .y=0x19, .sp=0xf8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x001d, .value=0xe9}, {.addr=0x8af0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8af1, .a=0xa9, .x=0x1d, .y=0x19, .sp=0xf8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x001d, .value=0xe9}, {.addr=0x8af0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8af0, .value=0x66, .type=IO_READ},
        {.addr=0x8af1, .value=DUMMY, .type=IO_READ},
        {.addr=0x001d, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x6bc4, .a=0x49, .x=0x08, .y=0x09, .sp=0x1d, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0x8d}, {.addr=0x6bc4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6bc5, .a=0x49, .x=0x08, .y=0x09, .sp=0x1d, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0x8d}, {.addr=0x6bc4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6bc4, .value=0x66, .type=IO_READ},
        {.addr=0x6bc5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xef65, .a=0xee, .x=0x86, .y=0x2b, .sp=0x63, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0x55}, {.addr=0xef65, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xef66, .a=0xee, .x=0x86, .y=0x2b, .sp=0x63, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0x55}, {.addr=0xef65, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xef65, .value=0x66, .type=IO_READ},
        {.addr=0xef66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x516c, .a=0x1e, .x=0x14, .y=0x4a, .sp=0xce, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x04}, {.addr=0x516c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x516d, .a=0x1e, .x=0x14, .y=0x4a, .sp=0xce, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x04}, {.addr=0x516c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x516c, .value=0x66, .type=IO_READ},
        {.addr=0x516d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xb042, .a=0x29, .x=0x9a, .y=0xd0, .sp=0x0e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x09}, {.addr=0xb042, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb043, .a=0x29, .x=0x9a, .y=0xd0, .sp=0x0e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x09}, {.addr=0xb042, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb042, .value=0x66, .type=IO_READ},
        {.addr=0xb043, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xea96, .a=0xeb, .x=0xa9, .y=0xc4, .sp=0x53, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x9d}, {.addr=0xea96, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xea97, .a=0xeb, .x=0xa9, .y=0xc4, .sp=0x53, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x9d}, {.addr=0xea96, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xea96, .value=0x66, .type=IO_READ},
        {.addr=0xea97, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B4) {
    const struct CPU_State initial_cpu = {.pc=0xd4dd, .a=0xcd, .x=0x45, .y=0x6c, .sp=0xc7, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0045, .value=0x10}, {.addr=0xd4dd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd4de, .a=0xcd, .x=0x45, .y=0x6c, .sp=0xc7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0045, .value=0x10}, {.addr=0xd4dd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd4dd, .value=0x66, .type=IO_READ},
        {.addr=0xd4de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0045, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xc1b7, .a=0x96, .x=0x28, .y=0x45, .sp=0xf8, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0xb0}, {.addr=0xc1b7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc1b8, .a=0x96, .x=0x28, .y=0x45, .sp=0xf8, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xb0}, {.addr=0xc1b7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc1b7, .value=0x66, .type=IO_READ},
        {.addr=0xc1b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xe3b7, .a=0x0d, .x=0x49, .y=0x18, .sp=0x1b, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0xfa}, {.addr=0xe3b7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe3b8, .a=0x0d, .x=0x49, .y=0x18, .sp=0x1b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0xfa}, {.addr=0xe3b7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe3b7, .value=0x66, .type=IO_READ},
        {.addr=0xe3b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xb1d0, .a=0xb0, .x=0x16, .y=0x8e, .sp=0x87, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x3e}, {.addr=0xb1d0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb1d1, .a=0xb0, .x=0x16, .y=0x8e, .sp=0x87, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x3e}, {.addr=0xb1d0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb1d0, .value=0x66, .type=IO_READ},
        {.addr=0xb1d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x284f, .a=0xfc, .x=0x15, .y=0x86, .sp=0x40, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0015, .value=0xc5}, {.addr=0x284f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2850, .a=0xfc, .x=0x15, .y=0x86, .sp=0x40, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x0015, .value=0xc5}, {.addr=0x284f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x284f, .value=0x66, .type=IO_READ},
        {.addr=0x2850, .value=DUMMY, .type=IO_READ},
        {.addr=0x0015, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x5ad3, .a=0x35, .x=0x42, .y=0x28, .sp=0x14, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x50}, {.addr=0x5ad3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5ad4, .a=0x35, .x=0x42, .y=0x28, .sp=0x14, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x50}, {.addr=0x5ad3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5ad3, .value=0x66, .type=IO_READ},
        {.addr=0x5ad4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x7541, .a=0x65, .x=0xb8, .y=0x3a, .sp=0x3f, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x4a}, {.addr=0x7541, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7542, .a=0x65, .x=0xb8, .y=0x3a, .sp=0x3f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x4a}, {.addr=0x7541, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7541, .value=0x66, .type=IO_READ},
        {.addr=0x7542, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x2232, .a=0x9f, .x=0xc5, .y=0xeb, .sp=0xdc, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0xc6}, {.addr=0x2232, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2233, .a=0x9f, .x=0xc5, .y=0xeb, .sp=0xdc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0xc6}, {.addr=0x2232, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2232, .value=0x66, .type=IO_READ},
        {.addr=0x2233, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x8f8a, .a=0xf2, .x=0x4b, .y=0xcb, .sp=0x5b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0x65}, {.addr=0x8f8a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8f8b, .a=0xf2, .x=0x4b, .y=0xcb, .sp=0x5b, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0x65}, {.addr=0x8f8a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8f8a, .value=0x66, .type=IO_READ},
        {.addr=0x8f8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xf15d, .a=0xf9, .x=0x74, .y=0x5c, .sp=0x45, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x20}, {.addr=0xf15d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf15e, .a=0xf9, .x=0x74, .y=0x5c, .sp=0x45, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x20}, {.addr=0xf15d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf15d, .value=0x66, .type=IO_READ},
        {.addr=0xf15e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x7613, .a=0xf4, .x=0xa5, .y=0x7e, .sp=0xc8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x23}, {.addr=0x7613, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7614, .a=0xf4, .x=0xa5, .y=0x7e, .sp=0xc8, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x23}, {.addr=0x7613, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7613, .value=0x66, .type=IO_READ},
        {.addr=0x7614, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xf3e2, .a=0x87, .x=0x23, .y=0x6e, .sp=0x2a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0xf8}, {.addr=0xf3e2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf3e3, .a=0x87, .x=0x23, .y=0x6e, .sp=0x2a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0xf8}, {.addr=0xf3e2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf3e2, .value=0x66, .type=IO_READ},
        {.addr=0xf3e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x19de, .a=0x69, .x=0x43, .y=0x80, .sp=0x00, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0xc2}, {.addr=0x19de, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x19df, .a=0x69, .x=0x43, .y=0x80, .sp=0x00, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0xc2}, {.addr=0x19de, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x19de, .value=0x66, .type=IO_READ},
        {.addr=0x19df, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xe04a, .a=0xa2, .x=0x12, .y=0xa1, .sp=0x28, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x0b}, {.addr=0xe04a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe04b, .a=0xa2, .x=0x12, .y=0xa1, .sp=0x28, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x0b}, {.addr=0xe04a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe04a, .value=0x66, .type=IO_READ},
        {.addr=0xe04b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0012, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x3539, .a=0xaa, .x=0x73, .y=0x1b, .sp=0x58, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x9c}, {.addr=0x3539, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x353a, .a=0xaa, .x=0x73, .y=0x1b, .sp=0x58, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x9c}, {.addr=0x3539, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3539, .value=0x66, .type=IO_READ},
        {.addr=0x353a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xdfc1, .a=0x5c, .x=0xcb, .y=0x55, .sp=0x22, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x90}, {.addr=0xdfc1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdfc2, .a=0x5c, .x=0xcb, .y=0x55, .sp=0x22, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x90}, {.addr=0xdfc1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdfc1, .value=0x66, .type=IO_READ},
        {.addr=0xdfc2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xde1b, .a=0xb3, .x=0xb8, .y=0x8b, .sp=0xfc, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x23}, {.addr=0xde1b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xde1c, .a=0xb3, .x=0xb8, .y=0x8b, .sp=0xfc, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x23}, {.addr=0xde1b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xde1b, .value=0x66, .type=IO_READ},
        {.addr=0xde1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x2e3f, .a=0x81, .x=0xa4, .y=0x71, .sp=0x91, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0xe3}, {.addr=0x2e3f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2e40, .a=0x81, .x=0xa4, .y=0x71, .sp=0x91, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0xe3}, {.addr=0x2e3f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2e3f, .value=0x66, .type=IO_READ},
        {.addr=0x2e40, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x75ad, .a=0x0b, .x=0xd6, .y=0xeb, .sp=0x75, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xcd}, {.addr=0x75ad, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x75ae, .a=0x0b, .x=0xd6, .y=0xeb, .sp=0x75, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xcd}, {.addr=0x75ad, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x75ad, .value=0x66, .type=IO_READ},
        {.addr=0x75ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x121e, .a=0xf4, .x=0x5c, .y=0x80, .sp=0x5e, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xf3}, {.addr=0x121e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x121f, .a=0xf4, .x=0x5c, .y=0x80, .sp=0x5e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xf3}, {.addr=0x121e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x121e, .value=0x66, .type=IO_READ},
        {.addr=0x121f, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x14e6, .a=0x84, .x=0x0c, .y=0xb1, .sp=0x54, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0xdc}, {.addr=0x14e6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x14e7, .a=0x84, .x=0x0c, .y=0xb1, .sp=0x54, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0xdc}, {.addr=0x14e6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x14e6, .value=0x66, .type=IO_READ},
        {.addr=0x14e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x2d91, .a=0xc9, .x=0x65, .y=0x97, .sp=0x3d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0xb0}, {.addr=0x2d91, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2d92, .a=0xc9, .x=0x65, .y=0x97, .sp=0x3d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0xb0}, {.addr=0x2d91, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2d91, .value=0x66, .type=IO_READ},
        {.addr=0x2d92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x179e, .a=0xeb, .x=0x71, .y=0x0e, .sp=0x1e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x85}, {.addr=0x179e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x179f, .a=0xeb, .x=0x71, .y=0x0e, .sp=0x1e, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x85}, {.addr=0x179e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x179e, .value=0x66, .type=IO_READ},
        {.addr=0x179f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x3a23, .a=0x06, .x=0xc5, .y=0x29, .sp=0x45, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x16}, {.addr=0x3a23, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3a24, .a=0x06, .x=0xc5, .y=0x29, .sp=0x45, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x16}, {.addr=0x3a23, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3a23, .value=0x66, .type=IO_READ},
        {.addr=0x3a24, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x9278, .a=0x3f, .x=0x13, .y=0xd8, .sp=0x8a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0x72}, {.addr=0x9278, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9279, .a=0x3f, .x=0x13, .y=0xd8, .sp=0x8a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0x72}, {.addr=0x9278, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9278, .value=0x66, .type=IO_READ},
        {.addr=0x9279, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x5cdd, .a=0x63, .x=0xd7, .y=0x16, .sp=0xba, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x06}, {.addr=0x5cdd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5cde, .a=0x63, .x=0xd7, .y=0x16, .sp=0xba, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x06}, {.addr=0x5cdd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5cdd, .value=0x66, .type=IO_READ},
        {.addr=0x5cde, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xc92c, .a=0xa8, .x=0x05, .y=0xea, .sp=0x98, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x1d}, {.addr=0xc92c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc92d, .a=0xa8, .x=0x05, .y=0xea, .sp=0x98, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x1d}, {.addr=0xc92c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc92c, .value=0x66, .type=IO_READ},
        {.addr=0xc92d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xc679, .a=0xd3, .x=0x76, .y=0xea, .sp=0x7f, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0x8b}, {.addr=0xc679, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc67a, .a=0xd3, .x=0x76, .y=0xea, .sp=0x7f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0x8b}, {.addr=0xc679, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc679, .value=0x66, .type=IO_READ},
        {.addr=0xc67a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D2) {
    const struct CPU_State initial_cpu = {.pc=0xf943, .a=0x56, .x=0xe5, .y=0x3d, .sp=0x60, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x7e}, {.addr=0xf943, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf944, .a=0x56, .x=0xe5, .y=0x3d, .sp=0x60, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x7e}, {.addr=0xf943, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf943, .value=0x66, .type=IO_READ},
        {.addr=0xf944, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x8b41, .a=0x55, .x=0xba, .y=0x02, .sp=0xf6, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x10}, {.addr=0x8b41, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8b42, .a=0x55, .x=0xba, .y=0x02, .sp=0xf6, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x10}, {.addr=0x8b41, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8b41, .value=0x66, .type=IO_READ},
        {.addr=0x8b42, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xc274, .a=0x9c, .x=0xe5, .y=0x6b, .sp=0x29, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x00e5, .value=0x1f}, {.addr=0xc274, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc275, .a=0x9c, .x=0xe5, .y=0x6b, .sp=0x29, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00e5, .value=0x1f}, {.addr=0xc274, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc274, .value=0x66, .type=IO_READ},
        {.addr=0xc275, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e5, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xf475, .a=0xc3, .x=0x7c, .y=0xcc, .sp=0x69, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x07}, {.addr=0xf475, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf476, .a=0xc3, .x=0x7c, .y=0xcc, .sp=0x69, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x07}, {.addr=0xf475, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf475, .value=0x66, .type=IO_READ},
        {.addr=0xf476, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xd6f5, .a=0x25, .x=0xec, .y=0xd4, .sp=0xbd, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x6e}, {.addr=0xd6f5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd6f6, .a=0x25, .x=0xec, .y=0xd4, .sp=0xbd, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x6e}, {.addr=0xd6f5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd6f5, .value=0x66, .type=IO_READ},
        {.addr=0xd6f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xcae9, .a=0x65, .x=0x17, .y=0x3e, .sp=0x64, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0xa6}, {.addr=0xcae9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcaea, .a=0x65, .x=0x17, .y=0x3e, .sp=0x64, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0xa6}, {.addr=0xcae9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcae9, .value=0x66, .type=IO_READ},
        {.addr=0xcaea, .value=DUMMY, .type=IO_READ},
        {.addr=0x0017, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x3ffa, .a=0x71, .x=0x1b, .y=0x34, .sp=0x24, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x7c}, {.addr=0x3ffa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3ffb, .a=0x71, .x=0x1b, .y=0x34, .sp=0x24, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x7c}, {.addr=0x3ffa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3ffa, .value=0x66, .type=IO_READ},
        {.addr=0x3ffb, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xb97e, .a=0x16, .x=0x28, .y=0xa2, .sp=0x67, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0028, .value=0x50}, {.addr=0xb97e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb97f, .a=0x16, .x=0x28, .y=0xa2, .sp=0x67, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0028, .value=0x50}, {.addr=0xb97e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb97e, .value=0x66, .type=IO_READ},
        {.addr=0xb97f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0028, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x5540, .a=0x81, .x=0x50, .y=0xb7, .sp=0x6c, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x01}, {.addr=0x5540, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5541, .a=0x81, .x=0x50, .y=0xb7, .sp=0x6c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x01}, {.addr=0x5540, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5540, .value=0x66, .type=IO_READ},
        {.addr=0x5541, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x3835, .a=0xd8, .x=0x49, .y=0xb7, .sp=0xe3, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x29}, {.addr=0x3835, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3836, .a=0xd8, .x=0x49, .y=0xb7, .sp=0xe3, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x29}, {.addr=0x3835, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3835, .value=0x66, .type=IO_READ},
        {.addr=0x3836, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x322f, .a=0x2d, .x=0x35, .y=0x84, .sp=0x46, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0xa3}, {.addr=0x322f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3230, .a=0x2d, .x=0x35, .y=0x84, .sp=0x46, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xa3}, {.addr=0x322f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x322f, .value=0x66, .type=IO_READ},
        {.addr=0x3230, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x0d7d, .a=0xc8, .x=0x87, .y=0x12, .sp=0x29, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0x0b}, {.addr=0x0d7d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0d7e, .a=0xc8, .x=0x87, .y=0x12, .sp=0x29, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0x0b}, {.addr=0x0d7d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0d7d, .value=0x66, .type=IO_READ},
        {.addr=0x0d7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x0748, .a=0x48, .x=0xdd, .y=0xdc, .sp=0xf0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0xd9}, {.addr=0x0748, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0749, .a=0x48, .x=0xdd, .y=0xdc, .sp=0xf0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0xd9}, {.addr=0x0748, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0748, .value=0x66, .type=IO_READ},
        {.addr=0x0749, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x2b37, .a=0x57, .x=0x18, .y=0x54, .sp=0x97, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0xba}, {.addr=0x2b37, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2b38, .a=0x57, .x=0x18, .y=0x54, .sp=0x97, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xba}, {.addr=0x2b37, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2b37, .value=0x66, .type=IO_READ},
        {.addr=0x2b38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xcdf2, .a=0xeb, .x=0x83, .y=0x13, .sp=0xac, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x8a}, {.addr=0xcdf2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcdf3, .a=0xeb, .x=0x83, .y=0x13, .sp=0xac, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x8a}, {.addr=0xcdf2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcdf2, .value=0x66, .type=IO_READ},
        {.addr=0xcdf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x9425, .a=0xe2, .x=0x77, .y=0x9c, .sp=0xbd, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x48}, {.addr=0x9425, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9426, .a=0xe2, .x=0x77, .y=0x9c, .sp=0xbd, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x48}, {.addr=0x9425, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9425, .value=0x66, .type=IO_READ},
        {.addr=0x9426, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x3e90, .a=0xc4, .x=0x77, .y=0xbf, .sp=0xd9, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0077, .value=0x55}, {.addr=0x3e90, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3e91, .a=0xc4, .x=0x77, .y=0xbf, .sp=0xd9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0077, .value=0x55}, {.addr=0x3e90, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3e90, .value=0x66, .type=IO_READ},
        {.addr=0x3e91, .value=DUMMY, .type=IO_READ},
        {.addr=0x0077, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x458d, .a=0xa4, .x=0xda, .y=0x14, .sp=0xd7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x47}, {.addr=0x458d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x458e, .a=0xa4, .x=0xda, .y=0x14, .sp=0xd7, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x47}, {.addr=0x458d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x458d, .value=0x66, .type=IO_READ},
        {.addr=0x458e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x6519, .a=0x06, .x=0x58, .y=0x57, .sp=0xfa, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x3e}, {.addr=0x6519, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x651a, .a=0x06, .x=0x58, .y=0x57, .sp=0xfa, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x3e}, {.addr=0x6519, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6519, .value=0x66, .type=IO_READ},
        {.addr=0x651a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x6a6f, .a=0xfb, .x=0x24, .y=0xd7, .sp=0x8e, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0024, .value=0xac}, {.addr=0x6a6f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6a70, .a=0xfb, .x=0x24, .y=0xd7, .sp=0x8e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0024, .value=0xac}, {.addr=0x6a6f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6a6f, .value=0x66, .type=IO_READ},
        {.addr=0x6a70, .value=DUMMY, .type=IO_READ},
        {.addr=0x0024, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x3d01, .a=0x44, .x=0xda, .y=0x76, .sp=0x81, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xd3}, {.addr=0x3d01, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3d02, .a=0x44, .x=0xda, .y=0x76, .sp=0x81, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xd3}, {.addr=0x3d01, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3d01, .value=0x66, .type=IO_READ},
        {.addr=0x3d02, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x89ce, .a=0x95, .x=0x6b, .y=0x64, .sp=0xc3, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x2e}, {.addr=0x89ce, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x89cf, .a=0x95, .x=0x6b, .y=0x64, .sp=0xc3, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x2e}, {.addr=0x89ce, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x89ce, .value=0x66, .type=IO_READ},
        {.addr=0x89cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x46bd, .a=0xdb, .x=0x26, .y=0xa9, .sp=0x95, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0026, .value=0x32}, {.addr=0x46bd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x46be, .a=0xdb, .x=0x26, .y=0xa9, .sp=0x95, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0026, .value=0x32}, {.addr=0x46bd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x46bd, .value=0x66, .type=IO_READ},
        {.addr=0x46be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0026, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x5073, .a=0xbd, .x=0x84, .y=0x65, .sp=0xe2, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x9c}, {.addr=0x5073, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5074, .a=0xbd, .x=0x84, .y=0x65, .sp=0xe2, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x9c}, {.addr=0x5073, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5073, .value=0x66, .type=IO_READ},
        {.addr=0x5074, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xd3b7, .a=0xf1, .x=0xb9, .y=0xe4, .sp=0x71, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x3a}, {.addr=0xd3b7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd3b8, .a=0xf1, .x=0xb9, .y=0xe4, .sp=0x71, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x3a}, {.addr=0xd3b7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd3b7, .value=0x66, .type=IO_READ},
        {.addr=0xd3b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xa068, .a=0xf7, .x=0xb3, .y=0x1a, .sp=0xf7, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x68}, {.addr=0xa068, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa069, .a=0xf7, .x=0xb3, .y=0x1a, .sp=0xf7, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x68}, {.addr=0xa068, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa068, .value=0x66, .type=IO_READ},
        {.addr=0xa069, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x050b, .a=0x36, .x=0xcc, .y=0x0a, .sp=0x74, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0xdf}, {.addr=0x050b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x050c, .a=0x36, .x=0xcc, .y=0x0a, .sp=0x74, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0xdf}, {.addr=0x050b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x050b, .value=0x66, .type=IO_READ},
        {.addr=0x050c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x52c7, .a=0x9e, .x=0x4d, .y=0x47, .sp=0x6b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0x86}, {.addr=0x52c7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x52c8, .a=0x9e, .x=0x4d, .y=0x47, .sp=0x6b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0x86}, {.addr=0x52c7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x52c7, .value=0x66, .type=IO_READ},
        {.addr=0x52c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xc903, .a=0xd1, .x=0x31, .y=0xdd, .sp=0x05, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x4a}, {.addr=0xc903, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc904, .a=0xd1, .x=0x31, .y=0xdd, .sp=0x05, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x4a}, {.addr=0xc903, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc903, .value=0x66, .type=IO_READ},
        {.addr=0xc904, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x49ee, .a=0x0b, .x=0x0a, .y=0x02, .sp=0xa2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x69}, {.addr=0x49ee, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x49ef, .a=0x0b, .x=0x0a, .y=0x02, .sp=0xa2, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x69}, {.addr=0x49ee, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x49ee, .value=0x66, .type=IO_READ},
        {.addr=0x49ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x9dd7, .a=0xc4, .x=0xbb, .y=0xc4, .sp=0x04, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x00bb, .value=0x2c}, {.addr=0x9dd7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9dd8, .a=0xc4, .x=0xbb, .y=0xc4, .sp=0x04, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x00bb, .value=0x2c}, {.addr=0x9dd7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9dd7, .value=0x66, .type=IO_READ},
        {.addr=0x9dd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bb, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x3fdc, .a=0x15, .x=0xda, .y=0x52, .sp=0x5e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x2f}, {.addr=0x3fdc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3fdd, .a=0x15, .x=0xda, .y=0x52, .sp=0x5e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x2f}, {.addr=0x3fdc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3fdc, .value=0x66, .type=IO_READ},
        {.addr=0x3fdd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F4) {
    const struct CPU_State initial_cpu = {.pc=0xfa37, .a=0x77, .x=0x87, .y=0x18, .sp=0xc8, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xb0}, {.addr=0xfa37, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfa38, .a=0x77, .x=0x87, .y=0x18, .sp=0xc8, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xb0}, {.addr=0xfa37, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfa37, .value=0x66, .type=IO_READ},
        {.addr=0xfa38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x2887, .a=0x97, .x=0x4d, .y=0xc5, .sp=0x35, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x97}, {.addr=0x2887, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2888, .a=0x97, .x=0x4d, .y=0xc5, .sp=0x35, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x97}, {.addr=0x2887, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2887, .value=0x66, .type=IO_READ},
        {.addr=0x2888, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xad43, .a=0x88, .x=0x6b, .y=0x24, .sp=0xa9, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x006b, .value=0x79}, {.addr=0xad43, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xad44, .a=0x88, .x=0x6b, .y=0x24, .sp=0xa9, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x006b, .value=0x79}, {.addr=0xad43, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xad43, .value=0x66, .type=IO_READ},
        {.addr=0xad44, .value=DUMMY, .type=IO_READ},
        {.addr=0x006b, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x5e80, .a=0x75, .x=0x9e, .y=0x9d, .sp=0x28, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x009e, .value=0x72}, {.addr=0x5e80, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5e81, .a=0x75, .x=0x9e, .y=0x9d, .sp=0x28, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x009e, .value=0x72}, {.addr=0x5e80, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5e80, .value=0x66, .type=IO_READ},
        {.addr=0x5e81, .value=DUMMY, .type=IO_READ},
        {.addr=0x009e, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x1fa1, .a=0x54, .x=0x9a, .y=0x1b, .sp=0x9d, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0xe8}, {.addr=0x1fa1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1fa2, .a=0x54, .x=0x9a, .y=0x1b, .sp=0x9d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0xe8}, {.addr=0x1fa1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1fa1, .value=0x66, .type=IO_READ},
        {.addr=0x1fa2, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01F9) {
    const struct CPU_State initial_cpu = {.pc=0xd6d8, .a=0xe4, .x=0x5e, .y=0x02, .sp=0x86, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x2e}, {.addr=0xd6d8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd6d9, .a=0xe4, .x=0x5e, .y=0x02, .sp=0x86, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x2e}, {.addr=0xd6d8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd6d8, .value=0x66, .type=IO_READ},
        {.addr=0xd6d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xeb96, .a=0xd6, .x=0x42, .y=0x6c, .sp=0x52, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0x9c}, {.addr=0xeb96, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xeb97, .a=0xd6, .x=0x42, .y=0x6c, .sp=0x52, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0x9c}, {.addr=0xeb96, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xeb96, .value=0x66, .type=IO_READ},
        {.addr=0xeb97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x19fe, .a=0x30, .x=0x40, .y=0x49, .sp=0x9a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0040, .value=0x55}, {.addr=0x19fe, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x19ff, .a=0x30, .x=0x40, .y=0x49, .sp=0x9a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0040, .value=0x55}, {.addr=0x19fe, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x19fe, .value=0x66, .type=IO_READ},
        {.addr=0x19ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0040, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01FC) {
    const struct CPU_State initial_cpu = {.pc=0xd076, .a=0xce, .x=0x7e, .y=0xc0, .sp=0x73, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x41}, {.addr=0xd076, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd077, .a=0xce, .x=0x7e, .y=0xc0, .sp=0x73, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x41}, {.addr=0xd076, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd076, .value=0x66, .type=IO_READ},
        {.addr=0xd077, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xb36f, .a=0x87, .x=0xa9, .y=0xc7, .sp=0x5d, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x00a9, .value=0x86}, {.addr=0xb36f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb370, .a=0x87, .x=0xa9, .y=0xc7, .sp=0x5d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00a9, .value=0x86}, {.addr=0xb36f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb36f, .value=0x66, .type=IO_READ},
        {.addr=0xb370, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a9, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xe2b8, .a=0x2b, .x=0x05, .y=0x11, .sp=0x67, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x1c}, {.addr=0xe2b8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe2b9, .a=0x2b, .x=0x05, .y=0x11, .sp=0x67, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x1c}, {.addr=0xe2b8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe2b8, .value=0x66, .type=IO_READ},
        {.addr=0xe2b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x72de, .a=0x8f, .x=0x1b, .y=0xdc, .sp=0x63, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x85}, {.addr=0x72de, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x72df, .a=0x8f, .x=0x1b, .y=0xdc, .sp=0x63, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x85}, {.addr=0x72de, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x72de, .value=0x66, .type=IO_READ},
        {.addr=0x72df, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0200) {
    const struct CPU_State initial_cpu = {.pc=0x634a, .a=0xf7, .x=0x43, .y=0x89, .sp=0x3e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0043, .value=0x3b}, {.addr=0x634a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x634b, .a=0xf7, .x=0x43, .y=0x89, .sp=0x3e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0043, .value=0x3b}, {.addr=0x634a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x634a, .value=0x66, .type=IO_READ},
        {.addr=0x634b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0043, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0201) {
    const struct CPU_State initial_cpu = {.pc=0x8bde, .a=0xe7, .x=0x98, .y=0x57, .sp=0x78, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0098, .value=0xb5}, {.addr=0x8bde, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8bdf, .a=0xe7, .x=0x98, .y=0x57, .sp=0x78, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0098, .value=0xb5}, {.addr=0x8bde, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8bde, .value=0x66, .type=IO_READ},
        {.addr=0x8bdf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0098, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0202) {
    const struct CPU_State initial_cpu = {.pc=0x2a24, .a=0x58, .x=0x83, .y=0x38, .sp=0x6e, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xb9}, {.addr=0x2a24, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2a25, .a=0x58, .x=0x83, .y=0x38, .sp=0x6e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xb9}, {.addr=0x2a24, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2a24, .value=0x66, .type=IO_READ},
        {.addr=0x2a25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0203) {
    const struct CPU_State initial_cpu = {.pc=0xe084, .a=0x0a, .x=0x17, .y=0x1f, .sp=0xd1, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x2f}, {.addr=0xe084, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe085, .a=0x0a, .x=0x17, .y=0x1f, .sp=0xd1, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x2f}, {.addr=0xe084, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe084, .value=0x66, .type=IO_READ},
        {.addr=0xe085, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0204) {
    const struct CPU_State initial_cpu = {.pc=0xa50d, .a=0x5a, .x=0x70, .y=0x5a, .sp=0xc4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x0c}, {.addr=0xa50d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa50e, .a=0x5a, .x=0x70, .y=0x5a, .sp=0xc4, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x0c}, {.addr=0xa50d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa50d, .value=0x66, .type=IO_READ},
        {.addr=0xa50e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0205) {
    const struct CPU_State initial_cpu = {.pc=0xc11e, .a=0x1a, .x=0x34, .y=0xce, .sp=0xc0, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0034, .value=0xfb}, {.addr=0xc11e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc11f, .a=0x1a, .x=0x34, .y=0xce, .sp=0xc0, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0034, .value=0xfb}, {.addr=0xc11e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc11e, .value=0x66, .type=IO_READ},
        {.addr=0xc11f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0034, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0206) {
    const struct CPU_State initial_cpu = {.pc=0x04de, .a=0xbb, .x=0xce, .y=0xac, .sp=0xc1, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x15}, {.addr=0x04de, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x04df, .a=0xbb, .x=0xce, .y=0xac, .sp=0xc1, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x15}, {.addr=0x04de, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x04de, .value=0x66, .type=IO_READ},
        {.addr=0x04df, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4470, .a=0xee, .x=0xab, .y=0x9a, .sp=0xe1, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x62}, {.addr=0x4470, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4471, .a=0xee, .x=0xab, .y=0x9a, .sp=0xe1, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x62}, {.addr=0x4470, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4470, .value=0x66, .type=IO_READ},
        {.addr=0x4471, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0208) {
    const struct CPU_State initial_cpu = {.pc=0x0689, .a=0x49, .x=0xd8, .y=0x0d, .sp=0xc3, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x37}, {.addr=0x0689, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x068a, .a=0x49, .x=0xd8, .y=0x0d, .sp=0xc3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x37}, {.addr=0x0689, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0689, .value=0x66, .type=IO_READ},
        {.addr=0x068a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0209) {
    const struct CPU_State initial_cpu = {.pc=0xd738, .a=0xee, .x=0xdf, .y=0xc9, .sp=0xcb, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x2e}, {.addr=0xd738, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd739, .a=0xee, .x=0xdf, .y=0xc9, .sp=0xcb, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x2e}, {.addr=0xd738, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd738, .value=0x66, .type=IO_READ},
        {.addr=0xd739, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_020A) {
    const struct CPU_State initial_cpu = {.pc=0xa286, .a=0xa7, .x=0xc3, .y=0x0e, .sp=0x63, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x1b}, {.addr=0xa286, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa287, .a=0xa7, .x=0xc3, .y=0x0e, .sp=0x63, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x1b}, {.addr=0xa286, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa286, .value=0x66, .type=IO_READ},
        {.addr=0xa287, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_020C) {
    const struct CPU_State initial_cpu = {.pc=0xe513, .a=0x20, .x=0x2e, .y=0x7a, .sp=0xec, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x87}, {.addr=0xe513, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe514, .a=0x20, .x=0x2e, .y=0x7a, .sp=0xec, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x87}, {.addr=0xe513, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe513, .value=0x66, .type=IO_READ},
        {.addr=0xe514, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_020D) {
    const struct CPU_State initial_cpu = {.pc=0x476e, .a=0x92, .x=0x93, .y=0x30, .sp=0x8e, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x71}, {.addr=0x476e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x476f, .a=0x92, .x=0x93, .y=0x30, .sp=0x8e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x71}, {.addr=0x476e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x476e, .value=0x66, .type=IO_READ},
        {.addr=0x476f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_020E) {
    const struct CPU_State initial_cpu = {.pc=0x9fd3, .a=0x32, .x=0x08, .y=0x12, .sp=0xca, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0008, .value=0xc8}, {.addr=0x9fd3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9fd4, .a=0x32, .x=0x08, .y=0x12, .sp=0xca, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x0008, .value=0xc8}, {.addr=0x9fd3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9fd3, .value=0x66, .type=IO_READ},
        {.addr=0x9fd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0008, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_020F) {
    const struct CPU_State initial_cpu = {.pc=0xe910, .a=0xf4, .x=0x9f, .y=0xd5, .sp=0xcd, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x31}, {.addr=0xe910, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe911, .a=0xf4, .x=0x9f, .y=0xd5, .sp=0xcd, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x31}, {.addr=0xe910, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe910, .value=0x66, .type=IO_READ},
        {.addr=0xe911, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0210) {
    const struct CPU_State initial_cpu = {.pc=0x8bc9, .a=0x5d, .x=0x85, .y=0x56, .sp=0x68, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0xf4}, {.addr=0x8bc9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8bca, .a=0x5d, .x=0x85, .y=0x56, .sp=0x68, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xf4}, {.addr=0x8bc9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8bc9, .value=0x66, .type=IO_READ},
        {.addr=0x8bca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0211) {
    const struct CPU_State initial_cpu = {.pc=0x71a7, .a=0xb2, .x=0x65, .y=0x79, .sp=0xb8, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0065, .value=0xe1}, {.addr=0x71a7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x71a8, .a=0xb2, .x=0x65, .y=0x79, .sp=0xb8, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0065, .value=0xe1}, {.addr=0x71a7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x71a7, .value=0x66, .type=IO_READ},
        {.addr=0x71a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0065, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0212) {
    const struct CPU_State initial_cpu = {.pc=0xa562, .a=0xab, .x=0xd7, .y=0x53, .sp=0x0a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x48}, {.addr=0xa562, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa563, .a=0xab, .x=0xd7, .y=0x53, .sp=0x0a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x48}, {.addr=0xa562, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa562, .value=0x66, .type=IO_READ},
        {.addr=0xa563, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0213) {
    const struct CPU_State initial_cpu = {.pc=0x56af, .a=0x48, .x=0x5d, .y=0xbe, .sp=0x95, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x005d, .value=0xc7}, {.addr=0x56af, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x56b0, .a=0x48, .x=0x5d, .y=0xbe, .sp=0x95, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x005d, .value=0xc7}, {.addr=0x56af, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x56af, .value=0x66, .type=IO_READ},
        {.addr=0x56b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x005d, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0215) {
    const struct CPU_State initial_cpu = {.pc=0xb2b3, .a=0xf9, .x=0xa3, .y=0xc4, .sp=0xc1, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0xfc}, {.addr=0xb2b3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb2b4, .a=0xf9, .x=0xa3, .y=0xc4, .sp=0xc1, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xfc}, {.addr=0xb2b3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb2b3, .value=0x66, .type=IO_READ},
        {.addr=0xb2b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0216) {
    const struct CPU_State initial_cpu = {.pc=0xa68a, .a=0xf2, .x=0x09, .y=0x4c, .sp=0xcc, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xf8}, {.addr=0xa68a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa68b, .a=0xf2, .x=0x09, .y=0x4c, .sp=0xcc, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xf8}, {.addr=0xa68a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa68a, .value=0x66, .type=IO_READ},
        {.addr=0xa68b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0217) {
    const struct CPU_State initial_cpu = {.pc=0xcd34, .a=0x70, .x=0xcc, .y=0x05, .sp=0xfa, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x18}, {.addr=0xcd34, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcd35, .a=0x70, .x=0xcc, .y=0x05, .sp=0xfa, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x18}, {.addr=0xcd34, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcd34, .value=0x66, .type=IO_READ},
        {.addr=0xcd35, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0218) {
    const struct CPU_State initial_cpu = {.pc=0xf2d8, .a=0x49, .x=0x82, .y=0xdd, .sp=0x7b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x0082, .value=0xd0}, {.addr=0xf2d8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf2d9, .a=0x49, .x=0x82, .y=0xdd, .sp=0x7b, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0082, .value=0xd0}, {.addr=0xf2d8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf2d8, .value=0x66, .type=IO_READ},
        {.addr=0xf2d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0082, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0219) {
    const struct CPU_State initial_cpu = {.pc=0x0c2a, .a=0xc2, .x=0x79, .y=0x9d, .sp=0xff, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0079, .value=0x19}, {.addr=0x0c2a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0c2b, .a=0xc2, .x=0x79, .y=0x9d, .sp=0xff, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0079, .value=0x19}, {.addr=0x0c2a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0c2a, .value=0x66, .type=IO_READ},
        {.addr=0x0c2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0079, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_021A) {
    const struct CPU_State initial_cpu = {.pc=0xfe9a, .a=0xac, .x=0x0b, .y=0x71, .sp=0x7a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x000b, .value=0x86}, {.addr=0xfe9a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfe9b, .a=0xac, .x=0x0b, .y=0x71, .sp=0x7a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x000b, .value=0x86}, {.addr=0xfe9a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfe9a, .value=0x66, .type=IO_READ},
        {.addr=0xfe9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x000b, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_021B) {
    const struct CPU_State initial_cpu = {.pc=0xb1ae, .a=0x12, .x=0x44, .y=0x4e, .sp=0x3b, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xa1}, {.addr=0xb1ae, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb1af, .a=0x12, .x=0x44, .y=0x4e, .sp=0x3b, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xa1}, {.addr=0xb1ae, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb1ae, .value=0x66, .type=IO_READ},
        {.addr=0xb1af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_021C) {
    const struct CPU_State initial_cpu = {.pc=0x3041, .a=0xef, .x=0xd6, .y=0x50, .sp=0x3e, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x76}, {.addr=0x3041, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3042, .a=0xef, .x=0xd6, .y=0x50, .sp=0x3e, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x76}, {.addr=0x3041, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3041, .value=0x66, .type=IO_READ},
        {.addr=0x3042, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_021D) {
    const struct CPU_State initial_cpu = {.pc=0x438c, .a=0x53, .x=0x16, .y=0x48, .sp=0x07, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x4b}, {.addr=0x438c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x438d, .a=0x53, .x=0x16, .y=0x48, .sp=0x07, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x4b}, {.addr=0x438c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x438c, .value=0x66, .type=IO_READ},
        {.addr=0x438d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_021E) {
    const struct CPU_State initial_cpu = {.pc=0x62e1, .a=0xdd, .x=0xd3, .y=0x89, .sp=0x25, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x10}, {.addr=0x62e1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x62e2, .a=0xdd, .x=0xd3, .y=0x89, .sp=0x25, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x10}, {.addr=0x62e1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x62e1, .value=0x66, .type=IO_READ},
        {.addr=0x62e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_021F) {
    const struct CPU_State initial_cpu = {.pc=0x16e0, .a=0x95, .x=0xb5, .y=0xe9, .sp=0x63, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x0c}, {.addr=0x16e0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x16e1, .a=0x95, .x=0xb5, .y=0xe9, .sp=0x63, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x0c}, {.addr=0x16e0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x16e0, .value=0x66, .type=IO_READ},
        {.addr=0x16e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0220) {
    const struct CPU_State initial_cpu = {.pc=0x7c93, .a=0x5e, .x=0xab, .y=0xb4, .sp=0x55, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xdb}, {.addr=0x7c93, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7c94, .a=0x5e, .x=0xab, .y=0xb4, .sp=0x55, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xdb}, {.addr=0x7c93, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7c93, .value=0x66, .type=IO_READ},
        {.addr=0x7c94, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0221) {
    const struct CPU_State initial_cpu = {.pc=0xb356, .a=0x58, .x=0xe2, .y=0xbe, .sp=0xd5, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x4e}, {.addr=0xb356, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb357, .a=0x58, .x=0xe2, .y=0xbe, .sp=0xd5, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x4e}, {.addr=0xb356, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb356, .value=0x66, .type=IO_READ},
        {.addr=0xb357, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0222) {
    const struct CPU_State initial_cpu = {.pc=0xcb99, .a=0xcf, .x=0xbf, .y=0xb4, .sp=0x61, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x3d}, {.addr=0xcb99, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcb9a, .a=0xcf, .x=0xbf, .y=0xb4, .sp=0x61, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x3d}, {.addr=0xcb99, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcb99, .value=0x66, .type=IO_READ},
        {.addr=0xcb9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0223) {
    const struct CPU_State initial_cpu = {.pc=0x1c64, .a=0xf5, .x=0xa9, .y=0x9b, .sp=0x1c, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x5e}, {.addr=0x1c64, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1c65, .a=0xf5, .x=0xa9, .y=0x9b, .sp=0x1c, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x5e}, {.addr=0x1c64, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1c64, .value=0x66, .type=IO_READ},
        {.addr=0x1c65, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0224) {
    const struct CPU_State initial_cpu = {.pc=0xdf07, .a=0xcc, .x=0xbf, .y=0x0d, .sp=0x87, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x00bf, .value=0x40}, {.addr=0xdf07, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdf08, .a=0xcc, .x=0xbf, .y=0x0d, .sp=0x87, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x00bf, .value=0x40}, {.addr=0xdf07, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdf07, .value=0x66, .type=IO_READ},
        {.addr=0xdf08, .value=DUMMY, .type=IO_READ},
        {.addr=0x00bf, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0225) {
    const struct CPU_State initial_cpu = {.pc=0xce2a, .a=0x1e, .x=0xc3, .y=0x3e, .sp=0x05, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0xc0}, {.addr=0xce2a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xce2b, .a=0x1e, .x=0xc3, .y=0x3e, .sp=0x05, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xc0}, {.addr=0xce2a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xce2a, .value=0x66, .type=IO_READ},
        {.addr=0xce2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0226) {
    const struct CPU_State initial_cpu = {.pc=0x5f75, .a=0x24, .x=0x5c, .y=0xc3, .sp=0xae, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x3a}, {.addr=0x5f75, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5f76, .a=0x24, .x=0x5c, .y=0xc3, .sp=0xae, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x3a}, {.addr=0x5f75, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5f75, .value=0x66, .type=IO_READ},
        {.addr=0x5f76, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0227) {
    const struct CPU_State initial_cpu = {.pc=0x67bf, .a=0x0b, .x=0x67, .y=0x27, .sp=0xce, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0067, .value=0xe1}, {.addr=0x67bf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x67c0, .a=0x0b, .x=0x67, .y=0x27, .sp=0xce, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0067, .value=0xe1}, {.addr=0x67bf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x67bf, .value=0x66, .type=IO_READ},
        {.addr=0x67c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0067, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0229) {
    const struct CPU_State initial_cpu = {.pc=0x4982, .a=0xd3, .x=0x9a, .y=0xc1, .sp=0x20, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x1f}, {.addr=0x4982, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4983, .a=0xd3, .x=0x9a, .y=0xc1, .sp=0x20, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x1f}, {.addr=0x4982, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4982, .value=0x66, .type=IO_READ},
        {.addr=0x4983, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_022A) {
    const struct CPU_State initial_cpu = {.pc=0x979b, .a=0xf5, .x=0x22, .y=0x73, .sp=0x38, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0022, .value=0x57}, {.addr=0x979b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x979c, .a=0xf5, .x=0x22, .y=0x73, .sp=0x38, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0022, .value=0x57}, {.addr=0x979b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x979b, .value=0x66, .type=IO_READ},
        {.addr=0x979c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0022, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_022C) {
    const struct CPU_State initial_cpu = {.pc=0xd95f, .a=0x81, .x=0x20, .y=0x25, .sp=0x60, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xee}, {.addr=0xd95f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd960, .a=0x81, .x=0x20, .y=0x25, .sp=0x60, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xee}, {.addr=0xd95f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd95f, .value=0x66, .type=IO_READ},
        {.addr=0xd960, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_022D) {
    const struct CPU_State initial_cpu = {.pc=0xf055, .a=0x65, .x=0xe6, .y=0x31, .sp=0x23, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0xbb}, {.addr=0xf055, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf056, .a=0x65, .x=0xe6, .y=0x31, .sp=0x23, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xbb}, {.addr=0xf055, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf055, .value=0x66, .type=IO_READ},
        {.addr=0xf056, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_022E) {
    const struct CPU_State initial_cpu = {.pc=0xa2a2, .a=0xbd, .x=0xe1, .y=0x73, .sp=0xa6, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x67}, {.addr=0xa2a2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa2a3, .a=0xbd, .x=0xe1, .y=0x73, .sp=0xa6, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x67}, {.addr=0xa2a2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa2a2, .value=0x66, .type=IO_READ},
        {.addr=0xa2a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_022F) {
    const struct CPU_State initial_cpu = {.pc=0x6620, .a=0x58, .x=0x2b, .y=0xae, .sp=0xf1, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0xa6}, {.addr=0x6620, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6621, .a=0x58, .x=0x2b, .y=0xae, .sp=0xf1, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0xa6}, {.addr=0x6620, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6620, .value=0x66, .type=IO_READ},
        {.addr=0x6621, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0230) {
    const struct CPU_State initial_cpu = {.pc=0x1ac7, .a=0x37, .x=0xe0, .y=0x5a, .sp=0x2e, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x3f}, {.addr=0x1ac7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1ac8, .a=0x37, .x=0xe0, .y=0x5a, .sp=0x2e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x3f}, {.addr=0x1ac7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1ac7, .value=0x66, .type=IO_READ},
        {.addr=0x1ac8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0231) {
    const struct CPU_State initial_cpu = {.pc=0x9c69, .a=0x91, .x=0xa1, .y=0x33, .sp=0x0a, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x00a1, .value=0x57}, {.addr=0x9c69, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9c6a, .a=0x91, .x=0xa1, .y=0x33, .sp=0x0a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00a1, .value=0x57}, {.addr=0x9c69, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9c69, .value=0x66, .type=IO_READ},
        {.addr=0x9c6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a1, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0232) {
    const struct CPU_State initial_cpu = {.pc=0xec84, .a=0x74, .x=0xfb, .y=0x30, .sp=0xe2, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0xe7}, {.addr=0xec84, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xec85, .a=0x74, .x=0xfb, .y=0x30, .sp=0xe2, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xe7}, {.addr=0xec84, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xec84, .value=0x66, .type=IO_READ},
        {.addr=0xec85, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0233) {
    const struct CPU_State initial_cpu = {.pc=0x6221, .a=0x98, .x=0xeb, .y=0x4b, .sp=0x4d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x87}, {.addr=0x6221, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6222, .a=0x98, .x=0xeb, .y=0x4b, .sp=0x4d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x87}, {.addr=0x6221, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6221, .value=0x66, .type=IO_READ},
        {.addr=0x6222, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0234) {
    const struct CPU_State initial_cpu = {.pc=0xd57c, .a=0x1b, .x=0x44, .y=0x81, .sp=0x56, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0044, .value=0x48}, {.addr=0xd57c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd57d, .a=0x1b, .x=0x44, .y=0x81, .sp=0x56, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0044, .value=0x48}, {.addr=0xd57c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd57c, .value=0x66, .type=IO_READ},
        {.addr=0xd57d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0044, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0235) {
    const struct CPU_State initial_cpu = {.pc=0xb100, .a=0xd2, .x=0xe3, .y=0xdd, .sp=0xa4, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0x61}, {.addr=0xb100, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb101, .a=0xd2, .x=0xe3, .y=0xdd, .sp=0xa4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0x61}, {.addr=0xb100, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb100, .value=0x66, .type=IO_READ},
        {.addr=0xb101, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0236) {
    const struct CPU_State initial_cpu = {.pc=0x73d9, .a=0x5b, .x=0x6c, .y=0x2e, .sp=0x10, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x65}, {.addr=0x73d9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x73da, .a=0x5b, .x=0x6c, .y=0x2e, .sp=0x10, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x65}, {.addr=0x73d9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x73d9, .value=0x66, .type=IO_READ},
        {.addr=0x73da, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0237) {
    const struct CPU_State initial_cpu = {.pc=0xe028, .a=0x51, .x=0xdb, .y=0x7d, .sp=0xc6, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0xc8}, {.addr=0xe028, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe029, .a=0x51, .x=0xdb, .y=0x7d, .sp=0xc6, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0xc8}, {.addr=0xe028, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe028, .value=0x66, .type=IO_READ},
        {.addr=0xe029, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0238) {
    const struct CPU_State initial_cpu = {.pc=0xe2b7, .a=0xee, .x=0x62, .y=0xdc, .sp=0x32, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x80}, {.addr=0xe2b7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe2b8, .a=0xee, .x=0x62, .y=0xdc, .sp=0x32, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x80}, {.addr=0xe2b7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe2b7, .value=0x66, .type=IO_READ},
        {.addr=0xe2b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0239) {
    const struct CPU_State initial_cpu = {.pc=0x8da9, .a=0xd5, .x=0xb0, .y=0xdd, .sp=0x47, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xd1}, {.addr=0x8da9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8daa, .a=0xd5, .x=0xb0, .y=0xdd, .sp=0x47, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xd1}, {.addr=0x8da9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8da9, .value=0x66, .type=IO_READ},
        {.addr=0x8daa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_023A) {
    const struct CPU_State initial_cpu = {.pc=0xb4df, .a=0xb0, .x=0x2e, .y=0xaf, .sp=0x20, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x002e, .value=0xeb}, {.addr=0xb4df, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb4e0, .a=0xb0, .x=0x2e, .y=0xaf, .sp=0x20, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x002e, .value=0xeb}, {.addr=0xb4df, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb4df, .value=0x66, .type=IO_READ},
        {.addr=0xb4e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x002e, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_023B) {
    const struct CPU_State initial_cpu = {.pc=0x6ccf, .a=0x9a, .x=0x13, .y=0x66, .sp=0xd9, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x25}, {.addr=0x6ccf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6cd0, .a=0x9a, .x=0x13, .y=0x66, .sp=0xd9, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x25}, {.addr=0x6ccf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6ccf, .value=0x66, .type=IO_READ},
        {.addr=0x6cd0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_023C) {
    const struct CPU_State initial_cpu = {.pc=0x3f9e, .a=0xec, .x=0xd4, .y=0x3d, .sp=0x3b, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00d4, .value=0x05}, {.addr=0x3f9e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3f9f, .a=0xec, .x=0xd4, .y=0x3d, .sp=0x3b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x00d4, .value=0x05}, {.addr=0x3f9e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3f9e, .value=0x66, .type=IO_READ},
        {.addr=0x3f9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d4, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_023D) {
    const struct CPU_State initial_cpu = {.pc=0x74ff, .a=0x9c, .x=0x3a, .y=0x90, .sp=0x23, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x3d}, {.addr=0x74ff, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7500, .a=0x9c, .x=0x3a, .y=0x90, .sp=0x23, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x3d}, {.addr=0x74ff, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x74ff, .value=0x66, .type=IO_READ},
        {.addr=0x7500, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_023E) {
    const struct CPU_State initial_cpu = {.pc=0x8cc5, .a=0x43, .x=0x6e, .y=0xfc, .sp=0xf7, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x006e, .value=0xfd}, {.addr=0x8cc5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8cc6, .a=0x43, .x=0x6e, .y=0xfc, .sp=0xf7, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x006e, .value=0xfd}, {.addr=0x8cc5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8cc5, .value=0x66, .type=IO_READ},
        {.addr=0x8cc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x006e, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_023F) {
    const struct CPU_State initial_cpu = {.pc=0xe0ef, .a=0xfe, .x=0x33, .y=0x0a, .sp=0xe8, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x6e}, {.addr=0xe0ef, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe0f0, .a=0xfe, .x=0x33, .y=0x0a, .sp=0xe8, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x6e}, {.addr=0xe0ef, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe0ef, .value=0x66, .type=IO_READ},
        {.addr=0xe0f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0240) {
    const struct CPU_State initial_cpu = {.pc=0xa292, .a=0xfe, .x=0xf8, .y=0x53, .sp=0x86, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xf2}, {.addr=0xa292, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa293, .a=0xfe, .x=0xf8, .y=0x53, .sp=0x86, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xf2}, {.addr=0xa292, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa292, .value=0x66, .type=IO_READ},
        {.addr=0xa293, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0241) {
    const struct CPU_State initial_cpu = {.pc=0xb8ac, .a=0x0b, .x=0xd2, .y=0xc6, .sp=0xe7, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00d2, .value=0xb9}, {.addr=0xb8ac, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb8ad, .a=0x0b, .x=0xd2, .y=0xc6, .sp=0xe7, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x00d2, .value=0xb9}, {.addr=0xb8ac, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb8ac, .value=0x66, .type=IO_READ},
        {.addr=0xb8ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d2, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0242) {
    const struct CPU_State initial_cpu = {.pc=0x8c1a, .a=0x77, .x=0xd5, .y=0xb6, .sp=0xb9, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0xad}, {.addr=0x8c1a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8c1b, .a=0x77, .x=0xd5, .y=0xb6, .sp=0xb9, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xad}, {.addr=0x8c1a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8c1a, .value=0x66, .type=IO_READ},
        {.addr=0x8c1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0243) {
    const struct CPU_State initial_cpu = {.pc=0xa2a3, .a=0xea, .x=0x45, .y=0x50, .sp=0x6c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0xf9}, {.addr=0xa2a3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa2a4, .a=0xea, .x=0x45, .y=0x50, .sp=0x6c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xf9}, {.addr=0xa2a3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa2a3, .value=0x66, .type=IO_READ},
        {.addr=0xa2a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0244) {
    const struct CPU_State initial_cpu = {.pc=0x0134, .a=0xd2, .x=0x5c, .y=0xf3, .sp=0xfc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x005c, .value=0x26}, {.addr=0x0134, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0135, .a=0xd2, .x=0x5c, .y=0xf3, .sp=0xfc, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x005c, .value=0x26}, {.addr=0x0134, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0134, .value=0x66, .type=IO_READ},
        {.addr=0x0135, .value=DUMMY, .type=IO_READ},
        {.addr=0x005c, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0245) {
    const struct CPU_State initial_cpu = {.pc=0x02c7, .a=0x81, .x=0xf4, .y=0xab, .sp=0x70, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x3f}, {.addr=0x02c7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x02c8, .a=0x81, .x=0xf4, .y=0xab, .sp=0x70, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x3f}, {.addr=0x02c7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x02c7, .value=0x66, .type=IO_READ},
        {.addr=0x02c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0246) {
    const struct CPU_State initial_cpu = {.pc=0x3cfb, .a=0x85, .x=0xb8, .y=0x73, .sp=0xfd, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x05}, {.addr=0x3cfb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3cfc, .a=0x85, .x=0xb8, .y=0x73, .sp=0xfd, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x05}, {.addr=0x3cfb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3cfb, .value=0x66, .type=IO_READ},
        {.addr=0x3cfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0247) {
    const struct CPU_State initial_cpu = {.pc=0x32b4, .a=0x7e, .x=0xc8, .y=0x43, .sp=0x34, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xf9}, {.addr=0x32b4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x32b5, .a=0x7e, .x=0xc8, .y=0x43, .sp=0x34, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xf9}, {.addr=0x32b4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x32b4, .value=0x66, .type=IO_READ},
        {.addr=0x32b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0248) {
    const struct CPU_State initial_cpu = {.pc=0x6185, .a=0x81, .x=0xaa, .y=0xd0, .sp=0x38, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x00aa, .value=0x19}, {.addr=0x6185, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6186, .a=0x81, .x=0xaa, .y=0xd0, .sp=0x38, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00aa, .value=0x19}, {.addr=0x6185, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6185, .value=0x66, .type=IO_READ},
        {.addr=0x6186, .value=DUMMY, .type=IO_READ},
        {.addr=0x00aa, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0249) {
    const struct CPU_State initial_cpu = {.pc=0x0a18, .a=0xa0, .x=0x71, .y=0x93, .sp=0x0d, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0xa5}, {.addr=0x0a18, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0a19, .a=0xa0, .x=0x71, .y=0x93, .sp=0x0d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0xa5}, {.addr=0x0a18, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0a18, .value=0x66, .type=IO_READ},
        {.addr=0x0a19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_024A) {
    const struct CPU_State initial_cpu = {.pc=0x05a1, .a=0x8f, .x=0x16, .y=0x4f, .sp=0xb5, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x95}, {.addr=0x05a1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x05a2, .a=0x8f, .x=0x16, .y=0x4f, .sp=0xb5, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x95}, {.addr=0x05a1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x05a1, .value=0x66, .type=IO_READ},
        {.addr=0x05a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_024B) {
    const struct CPU_State initial_cpu = {.pc=0xb069, .a=0xd4, .x=0x56, .y=0x63, .sp=0x10, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0x88}, {.addr=0xb069, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb06a, .a=0xd4, .x=0x56, .y=0x63, .sp=0x10, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0x88}, {.addr=0xb069, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb069, .value=0x66, .type=IO_READ},
        {.addr=0xb06a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_024C) {
    const struct CPU_State initial_cpu = {.pc=0x4a3b, .a=0x2b, .x=0x50, .y=0x58, .sp=0x9f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x95}, {.addr=0x4a3b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4a3c, .a=0x2b, .x=0x50, .y=0x58, .sp=0x9f, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x95}, {.addr=0x4a3b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4a3b, .value=0x66, .type=IO_READ},
        {.addr=0x4a3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_024D) {
    const struct CPU_State initial_cpu = {.pc=0x21f9, .a=0x75, .x=0x94, .y=0x14, .sp=0x9a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x32}, {.addr=0x21f9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x21fa, .a=0x75, .x=0x94, .y=0x14, .sp=0x9a, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x32}, {.addr=0x21f9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x21f9, .value=0x66, .type=IO_READ},
        {.addr=0x21fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_024E) {
    const struct CPU_State initial_cpu = {.pc=0x7421, .a=0x57, .x=0xe9, .y=0x77, .sp=0x44, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x69}, {.addr=0x7421, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7422, .a=0x57, .x=0xe9, .y=0x77, .sp=0x44, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x69}, {.addr=0x7421, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7421, .value=0x66, .type=IO_READ},
        {.addr=0x7422, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_024F) {
    const struct CPU_State initial_cpu = {.pc=0xcaab, .a=0x15, .x=0xec, .y=0xac, .sp=0x50, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x58}, {.addr=0xcaab, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcaac, .a=0x15, .x=0xec, .y=0xac, .sp=0x50, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x58}, {.addr=0xcaab, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcaab, .value=0x66, .type=IO_READ},
        {.addr=0xcaac, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0250) {
    const struct CPU_State initial_cpu = {.pc=0x0eb4, .a=0xef, .x=0xb7, .y=0x76, .sp=0x90, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0xdc}, {.addr=0x0eb4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0eb5, .a=0xef, .x=0xb7, .y=0x76, .sp=0x90, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xdc}, {.addr=0x0eb4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0eb4, .value=0x66, .type=IO_READ},
        {.addr=0x0eb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0251) {
    const struct CPU_State initial_cpu = {.pc=0x3e75, .a=0x11, .x=0xf0, .y=0x02, .sp=0xc0, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0xcc}, {.addr=0x3e75, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3e76, .a=0x11, .x=0xf0, .y=0x02, .sp=0xc0, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0xcc}, {.addr=0x3e75, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3e75, .value=0x66, .type=IO_READ},
        {.addr=0x3e76, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0252) {
    const struct CPU_State initial_cpu = {.pc=0x3141, .a=0x5a, .x=0xdf, .y=0x25, .sp=0x21, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x5f}, {.addr=0x3141, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3142, .a=0x5a, .x=0xdf, .y=0x25, .sp=0x21, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x5f}, {.addr=0x3141, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3141, .value=0x66, .type=IO_READ},
        {.addr=0x3142, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0253) {
    const struct CPU_State initial_cpu = {.pc=0xf535, .a=0xd3, .x=0xa9, .y=0x31, .sp=0xc4, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x77}, {.addr=0xf535, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf536, .a=0xd3, .x=0xa9, .y=0x31, .sp=0xc4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x77}, {.addr=0xf535, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf535, .value=0x66, .type=IO_READ},
        {.addr=0xf536, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0254) {
    const struct CPU_State initial_cpu = {.pc=0x0772, .a=0xaa, .x=0xd1, .y=0xbf, .sp=0xb5, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x9d}, {.addr=0x0772, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0773, .a=0xaa, .x=0xd1, .y=0xbf, .sp=0xb5, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x9d}, {.addr=0x0772, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0772, .value=0x66, .type=IO_READ},
        {.addr=0x0773, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0255) {
    const struct CPU_State initial_cpu = {.pc=0x9d25, .a=0x70, .x=0x74, .y=0x4a, .sp=0x77, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0xef}, {.addr=0x9d25, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9d26, .a=0x70, .x=0x74, .y=0x4a, .sp=0x77, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0xef}, {.addr=0x9d25, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9d25, .value=0x66, .type=IO_READ},
        {.addr=0x9d26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0256) {
    const struct CPU_State initial_cpu = {.pc=0x9685, .a=0xb2, .x=0xc2, .y=0x76, .sp=0x40, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xa9}, {.addr=0x9685, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9686, .a=0xb2, .x=0xc2, .y=0x76, .sp=0x40, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xa9}, {.addr=0x9685, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9685, .value=0x66, .type=IO_READ},
        {.addr=0x9686, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0257) {
    const struct CPU_State initial_cpu = {.pc=0xa53d, .a=0x74, .x=0xf7, .y=0xb5, .sp=0x17, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x05}, {.addr=0xa53d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa53e, .a=0x74, .x=0xf7, .y=0xb5, .sp=0x17, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x05}, {.addr=0xa53d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa53d, .value=0x66, .type=IO_READ},
        {.addr=0xa53e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0258) {
    const struct CPU_State initial_cpu = {.pc=0x4fe2, .a=0xad, .x=0x2f, .y=0x12, .sp=0x26, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x002f, .value=0x64}, {.addr=0x4fe2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4fe3, .a=0xad, .x=0x2f, .y=0x12, .sp=0x26, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x002f, .value=0x64}, {.addr=0x4fe2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4fe2, .value=0x66, .type=IO_READ},
        {.addr=0x4fe3, .value=DUMMY, .type=IO_READ},
        {.addr=0x002f, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0259) {
    const struct CPU_State initial_cpu = {.pc=0xac91, .a=0x69, .x=0xc0, .y=0xae, .sp=0x8f, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0x69}, {.addr=0xac91, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xac92, .a=0x69, .x=0xc0, .y=0xae, .sp=0x8f, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0x69}, {.addr=0xac91, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xac91, .value=0x66, .type=IO_READ},
        {.addr=0xac92, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_025A) {
    const struct CPU_State initial_cpu = {.pc=0x1613, .a=0xaf, .x=0x7d, .y=0x27, .sp=0x16, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x2f}, {.addr=0x1613, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1614, .a=0xaf, .x=0x7d, .y=0x27, .sp=0x16, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x2f}, {.addr=0x1613, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1613, .value=0x66, .type=IO_READ},
        {.addr=0x1614, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_025B) {
    const struct CPU_State initial_cpu = {.pc=0xc807, .a=0x08, .x=0x2a, .y=0xf1, .sp=0x64, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x38}, {.addr=0xc807, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc808, .a=0x08, .x=0x2a, .y=0xf1, .sp=0x64, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x38}, {.addr=0xc807, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc807, .value=0x66, .type=IO_READ},
        {.addr=0xc808, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_025C) {
    const struct CPU_State initial_cpu = {.pc=0x2268, .a=0x47, .x=0xe8, .y=0xb2, .sp=0x21, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x51}, {.addr=0x2268, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2269, .a=0x47, .x=0xe8, .y=0xb2, .sp=0x21, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x51}, {.addr=0x2268, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2268, .value=0x66, .type=IO_READ},
        {.addr=0x2269, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_025D) {
    const struct CPU_State initial_cpu = {.pc=0x611e, .a=0x34, .x=0x44, .y=0xfe, .sp=0x21, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x57}, {.addr=0x611e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x611f, .a=0x34, .x=0x44, .y=0xfe, .sp=0x21, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x57}, {.addr=0x611e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x611e, .value=0x66, .type=IO_READ},
        {.addr=0x611f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_025E) {
    const struct CPU_State initial_cpu = {.pc=0x55fa, .a=0x5b, .x=0x24, .y=0x1a, .sp=0x02, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0xb2}, {.addr=0x55fa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x55fb, .a=0x5b, .x=0x24, .y=0x1a, .sp=0x02, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xb2}, {.addr=0x55fa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x55fa, .value=0x66, .type=IO_READ},
        {.addr=0x55fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_025F) {
    const struct CPU_State initial_cpu = {.pc=0xb612, .a=0xd9, .x=0xda, .y=0xd8, .sp=0x31, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xf6}, {.addr=0xb612, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb613, .a=0xd9, .x=0xda, .y=0xd8, .sp=0x31, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xf6}, {.addr=0xb612, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb612, .value=0x66, .type=IO_READ},
        {.addr=0xb613, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0260) {
    const struct CPU_State initial_cpu = {.pc=0x2e9f, .a=0xa4, .x=0xc4, .y=0x14, .sp=0xf0, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x68}, {.addr=0x2e9f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2ea0, .a=0xa4, .x=0xc4, .y=0x14, .sp=0xf0, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x68}, {.addr=0x2e9f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2e9f, .value=0x66, .type=IO_READ},
        {.addr=0x2ea0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0261) {
    const struct CPU_State initial_cpu = {.pc=0x3d1a, .a=0x1b, .x=0x52, .y=0xa4, .sp=0x29, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x59}, {.addr=0x3d1a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3d1b, .a=0x1b, .x=0x52, .y=0xa4, .sp=0x29, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x59}, {.addr=0x3d1a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3d1a, .value=0x66, .type=IO_READ},
        {.addr=0x3d1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0262) {
    const struct CPU_State initial_cpu = {.pc=0x1f15, .a=0x38, .x=0xcd, .y=0xc2, .sp=0xe8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x2e}, {.addr=0x1f15, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1f16, .a=0x38, .x=0xcd, .y=0xc2, .sp=0xe8, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x2e}, {.addr=0x1f15, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1f15, .value=0x66, .type=IO_READ},
        {.addr=0x1f16, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0263) {
    const struct CPU_State initial_cpu = {.pc=0xba91, .a=0x87, .x=0x13, .y=0x75, .sp=0xc7, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0013, .value=0xd9}, {.addr=0xba91, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xba92, .a=0x87, .x=0x13, .y=0x75, .sp=0xc7, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0013, .value=0xd9}, {.addr=0xba91, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xba91, .value=0x66, .type=IO_READ},
        {.addr=0xba92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0013, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0264) {
    const struct CPU_State initial_cpu = {.pc=0xe4af, .a=0x83, .x=0x90, .y=0x09, .sp=0xae, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0xfb}, {.addr=0xe4af, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe4b0, .a=0x83, .x=0x90, .y=0x09, .sp=0xae, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0xfb}, {.addr=0xe4af, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe4af, .value=0x66, .type=IO_READ},
        {.addr=0xe4b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0265) {
    const struct CPU_State initial_cpu = {.pc=0xb6a9, .a=0x99, .x=0xa7, .y=0x0d, .sp=0x22, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x00a7, .value=0x3a}, {.addr=0xb6a9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb6aa, .a=0x99, .x=0xa7, .y=0x0d, .sp=0x22, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00a7, .value=0x3a}, {.addr=0xb6a9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb6a9, .value=0x66, .type=IO_READ},
        {.addr=0xb6aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a7, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0266) {
    const struct CPU_State initial_cpu = {.pc=0x7a47, .a=0xc6, .x=0x99, .y=0x55, .sp=0x57, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0x6b}, {.addr=0x7a47, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7a48, .a=0xc6, .x=0x99, .y=0x55, .sp=0x57, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0x6b}, {.addr=0x7a47, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7a47, .value=0x66, .type=IO_READ},
        {.addr=0x7a48, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0267) {
    const struct CPU_State initial_cpu = {.pc=0x113c, .a=0xca, .x=0x5b, .y=0x42, .sp=0x16, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xc9}, {.addr=0x113c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x113d, .a=0xca, .x=0x5b, .y=0x42, .sp=0x16, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xc9}, {.addr=0x113c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x113c, .value=0x66, .type=IO_READ},
        {.addr=0x113d, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0268) {
    const struct CPU_State initial_cpu = {.pc=0x8308, .a=0x82, .x=0x5c, .y=0xeb, .sp=0x47, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0xf6}, {.addr=0x8308, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8309, .a=0x82, .x=0x5c, .y=0xeb, .sp=0x47, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xf6}, {.addr=0x8308, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8308, .value=0x66, .type=IO_READ},
        {.addr=0x8309, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0269) {
    const struct CPU_State initial_cpu = {.pc=0x065e, .a=0x4c, .x=0xe4, .y=0xaa, .sp=0x11, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00e4, .value=0x5c}, {.addr=0x065e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x065f, .a=0x4c, .x=0xe4, .y=0xaa, .sp=0x11, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00e4, .value=0x5c}, {.addr=0x065e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x065e, .value=0x66, .type=IO_READ},
        {.addr=0x065f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e4, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_026A) {
    const struct CPU_State initial_cpu = {.pc=0x55b9, .a=0x6a, .x=0x8e, .y=0xd5, .sp=0x24, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x99}, {.addr=0x55b9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x55ba, .a=0x6a, .x=0x8e, .y=0xd5, .sp=0x24, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x99}, {.addr=0x55b9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x55b9, .value=0x66, .type=IO_READ},
        {.addr=0x55ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_026B) {
    const struct CPU_State initial_cpu = {.pc=0xf2e7, .a=0x48, .x=0x4c, .y=0x67, .sp=0x73, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xe9}, {.addr=0xf2e7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf2e8, .a=0x48, .x=0x4c, .y=0x67, .sp=0x73, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xe9}, {.addr=0xf2e7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf2e7, .value=0x66, .type=IO_READ},
        {.addr=0xf2e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_026C) {
    const struct CPU_State initial_cpu = {.pc=0x71ec, .a=0x54, .x=0x02, .y=0x21, .sp=0xd0, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x17}, {.addr=0x71ec, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x71ed, .a=0x54, .x=0x02, .y=0x21, .sp=0xd0, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x17}, {.addr=0x71ec, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x71ec, .value=0x66, .type=IO_READ},
        {.addr=0x71ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_026D) {
    const struct CPU_State initial_cpu = {.pc=0x6635, .a=0x68, .x=0x44, .y=0x61, .sp=0x53, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0xa4}, {.addr=0x6635, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6636, .a=0x68, .x=0x44, .y=0x61, .sp=0x53, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xa4}, {.addr=0x6635, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6635, .value=0x66, .type=IO_READ},
        {.addr=0x6636, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_026E) {
    const struct CPU_State initial_cpu = {.pc=0xe6b0, .a=0x25, .x=0x83, .y=0xa4, .sp=0xce, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0xda}, {.addr=0xe6b0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe6b1, .a=0x25, .x=0x83, .y=0xa4, .sp=0xce, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xda}, {.addr=0xe6b0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe6b0, .value=0x66, .type=IO_READ},
        {.addr=0xe6b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_026F) {
    const struct CPU_State initial_cpu = {.pc=0x2743, .a=0x3d, .x=0xd3, .y=0x2b, .sp=0x26, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x2a}, {.addr=0x2743, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2744, .a=0x3d, .x=0xd3, .y=0x2b, .sp=0x26, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x2a}, {.addr=0x2743, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2743, .value=0x66, .type=IO_READ},
        {.addr=0x2744, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0270) {
    const struct CPU_State initial_cpu = {.pc=0x2602, .a=0x32, .x=0x0d, .y=0x52, .sp=0xbf, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x6b}, {.addr=0x2602, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2603, .a=0x32, .x=0x0d, .y=0x52, .sp=0xbf, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x6b}, {.addr=0x2602, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2602, .value=0x66, .type=IO_READ},
        {.addr=0x2603, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0271) {
    const struct CPU_State initial_cpu = {.pc=0x6de0, .a=0x12, .x=0x2b, .y=0xfd, .sp=0xd3, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x38}, {.addr=0x6de0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6de1, .a=0x12, .x=0x2b, .y=0xfd, .sp=0xd3, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x38}, {.addr=0x6de0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6de0, .value=0x66, .type=IO_READ},
        {.addr=0x6de1, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0272) {
    const struct CPU_State initial_cpu = {.pc=0xf2df, .a=0xa4, .x=0x24, .y=0xbc, .sp=0x0b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x3f}, {.addr=0xf2df, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf2e0, .a=0xa4, .x=0x24, .y=0xbc, .sp=0x0b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x3f}, {.addr=0xf2df, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf2df, .value=0x66, .type=IO_READ},
        {.addr=0xf2e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0273) {
    const struct CPU_State initial_cpu = {.pc=0x0353, .a=0x04, .x=0x46, .y=0xdd, .sp=0xba, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x44}, {.addr=0x0353, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0354, .a=0x04, .x=0x46, .y=0xdd, .sp=0xba, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x44}, {.addr=0x0353, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0353, .value=0x66, .type=IO_READ},
        {.addr=0x0354, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0274) {
    const struct CPU_State initial_cpu = {.pc=0xd17f, .a=0x36, .x=0x53, .y=0x29, .sp=0xf4, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x2c}, {.addr=0xd17f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd180, .a=0x36, .x=0x53, .y=0x29, .sp=0xf4, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x2c}, {.addr=0xd17f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd17f, .value=0x66, .type=IO_READ},
        {.addr=0xd180, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0275) {
    const struct CPU_State initial_cpu = {.pc=0xc85b, .a=0xc3, .x=0x9a, .y=0xb4, .sp=0xbb, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x009a, .value=0x5c}, {.addr=0xc85b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc85c, .a=0xc3, .x=0x9a, .y=0xb4, .sp=0xbb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x009a, .value=0x5c}, {.addr=0xc85b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc85b, .value=0x66, .type=IO_READ},
        {.addr=0xc85c, .value=DUMMY, .type=IO_READ},
        {.addr=0x009a, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0276) {
    const struct CPU_State initial_cpu = {.pc=0x1f25, .a=0x86, .x=0x36, .y=0x87, .sp=0xa8, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x23}, {.addr=0x1f25, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1f26, .a=0x86, .x=0x36, .y=0x87, .sp=0xa8, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x23}, {.addr=0x1f25, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1f25, .value=0x66, .type=IO_READ},
        {.addr=0x1f26, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0277) {
    const struct CPU_State initial_cpu = {.pc=0x8dde, .a=0x5f, .x=0x68, .y=0x89, .sp=0x93, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0xf9}, {.addr=0x8dde, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8ddf, .a=0x5f, .x=0x68, .y=0x89, .sp=0x93, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xf9}, {.addr=0x8dde, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8dde, .value=0x66, .type=IO_READ},
        {.addr=0x8ddf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0278) {
    const struct CPU_State initial_cpu = {.pc=0x2c43, .a=0xeb, .x=0x56, .y=0xb4, .sp=0xe4, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0056, .value=0xf6}, {.addr=0x2c43, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2c44, .a=0xeb, .x=0x56, .y=0xb4, .sp=0xe4, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0056, .value=0xf6}, {.addr=0x2c43, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2c43, .value=0x66, .type=IO_READ},
        {.addr=0x2c44, .value=DUMMY, .type=IO_READ},
        {.addr=0x0056, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0279) {
    const struct CPU_State initial_cpu = {.pc=0x5596, .a=0x7d, .x=0xf8, .y=0x91, .sp=0xee, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x2e}, {.addr=0x5596, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5597, .a=0x7d, .x=0xf8, .y=0x91, .sp=0xee, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x2e}, {.addr=0x5596, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5596, .value=0x66, .type=IO_READ},
        {.addr=0x5597, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_027A) {
    const struct CPU_State initial_cpu = {.pc=0xd83f, .a=0x45, .x=0xdd, .y=0x19, .sp=0x11, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x67}, {.addr=0xd83f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd840, .a=0x45, .x=0xdd, .y=0x19, .sp=0x11, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x67}, {.addr=0xd83f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd83f, .value=0x66, .type=IO_READ},
        {.addr=0xd840, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_027B) {
    const struct CPU_State initial_cpu = {.pc=0x0017, .a=0xf2, .x=0x7c, .y=0xc5, .sp=0x6c, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0017, .value=0x66}, {.addr=0x007c, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x0018, .a=0xf2, .x=0x7c, .y=0xc5, .sp=0x6c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0017, .value=0x66}, {.addr=0x007c, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x0017, .value=0x66, .type=IO_READ},
        {.addr=0x0018, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_027C) {
    const struct CPU_State initial_cpu = {.pc=0xb584, .a=0x4b, .x=0x7c, .y=0xbc, .sp=0xf8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x007c, .value=0x26}, {.addr=0xb584, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb585, .a=0x4b, .x=0x7c, .y=0xbc, .sp=0xf8, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x007c, .value=0x26}, {.addr=0xb584, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb584, .value=0x66, .type=IO_READ},
        {.addr=0xb585, .value=DUMMY, .type=IO_READ},
        {.addr=0x007c, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_027D) {
    const struct CPU_State initial_cpu = {.pc=0xf201, .a=0xb4, .x=0xc5, .y=0xd8, .sp=0x45, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x00c5, .value=0x46}, {.addr=0xf201, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf202, .a=0xb4, .x=0xc5, .y=0xd8, .sp=0x45, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00c5, .value=0x46}, {.addr=0xf201, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf201, .value=0x66, .type=IO_READ},
        {.addr=0xf202, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c5, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_027E) {
    const struct CPU_State initial_cpu = {.pc=0x1434, .a=0x4c, .x=0x7f, .y=0x5b, .sp=0x53, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0xc3}, {.addr=0x1434, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1435, .a=0x4c, .x=0x7f, .y=0x5b, .sp=0x53, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0xc3}, {.addr=0x1434, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1434, .value=0x66, .type=IO_READ},
        {.addr=0x1435, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_027F) {
    const struct CPU_State initial_cpu = {.pc=0xfba4, .a=0xee, .x=0xed, .y=0x8f, .sp=0x41, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0x99}, {.addr=0xfba4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfba5, .a=0xee, .x=0xed, .y=0x8f, .sp=0x41, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0x99}, {.addr=0xfba4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfba4, .value=0x66, .type=IO_READ},
        {.addr=0xfba5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0280) {
    const struct CPU_State initial_cpu = {.pc=0x3ef4, .a=0x47, .x=0x5d, .y=0x49, .sp=0xe9, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x67}, {.addr=0x3ef4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3ef5, .a=0x47, .x=0x5d, .y=0x49, .sp=0xe9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x67}, {.addr=0x3ef4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3ef4, .value=0x66, .type=IO_READ},
        {.addr=0x3ef5, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0281) {
    const struct CPU_State initial_cpu = {.pc=0xfa9e, .a=0xcf, .x=0x4c, .y=0x82, .sp=0x5e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x45}, {.addr=0xfa9e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfa9f, .a=0xcf, .x=0x4c, .y=0x82, .sp=0x5e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x45}, {.addr=0xfa9e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfa9e, .value=0x66, .type=IO_READ},
        {.addr=0xfa9f, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0282) {
    const struct CPU_State initial_cpu = {.pc=0x35c5, .a=0xc0, .x=0x8e, .y=0x1e, .sp=0x4f, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x72}, {.addr=0x35c5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x35c6, .a=0xc0, .x=0x8e, .y=0x1e, .sp=0x4f, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x72}, {.addr=0x35c5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x35c5, .value=0x66, .type=IO_READ},
        {.addr=0x35c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0283) {
    const struct CPU_State initial_cpu = {.pc=0x03ea, .a=0x8b, .x=0x27, .y=0x89, .sp=0x50, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x59}, {.addr=0x03ea, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x03eb, .a=0x8b, .x=0x27, .y=0x89, .sp=0x50, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x59}, {.addr=0x03ea, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x03ea, .value=0x66, .type=IO_READ},
        {.addr=0x03eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0284) {
    const struct CPU_State initial_cpu = {.pc=0x5970, .a=0xc4, .x=0xba, .y=0x1c, .sp=0xd2, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x00ba, .value=0x6e}, {.addr=0x5970, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5971, .a=0xc4, .x=0xba, .y=0x1c, .sp=0xd2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x00ba, .value=0x6e}, {.addr=0x5970, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5970, .value=0x66, .type=IO_READ},
        {.addr=0x5971, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ba, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0285) {
    const struct CPU_State initial_cpu = {.pc=0xbd47, .a=0x28, .x=0xb1, .y=0x10, .sp=0x78, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x1c}, {.addr=0xbd47, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbd48, .a=0x28, .x=0xb1, .y=0x10, .sp=0x78, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x1c}, {.addr=0xbd47, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbd47, .value=0x66, .type=IO_READ},
        {.addr=0xbd48, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0286) {
    const struct CPU_State initial_cpu = {.pc=0xf8c7, .a=0xce, .x=0x04, .y=0xc9, .sp=0xf2, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0004, .value=0x5e}, {.addr=0xf8c7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf8c8, .a=0xce, .x=0x04, .y=0xc9, .sp=0xf2, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0004, .value=0x5e}, {.addr=0xf8c7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf8c7, .value=0x66, .type=IO_READ},
        {.addr=0xf8c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0004, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0287) {
    const struct CPU_State initial_cpu = {.pc=0x3309, .a=0xc7, .x=0xe2, .y=0x14, .sp=0x31, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x89}, {.addr=0x3309, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x330a, .a=0xc7, .x=0xe2, .y=0x14, .sp=0x31, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x89}, {.addr=0x3309, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3309, .value=0x66, .type=IO_READ},
        {.addr=0x330a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0288) {
    const struct CPU_State initial_cpu = {.pc=0x32e9, .a=0xb0, .x=0xa2, .y=0x00, .sp=0xa2, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x91}, {.addr=0x32e9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x32ea, .a=0xb0, .x=0xa2, .y=0x00, .sp=0xa2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x91}, {.addr=0x32e9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x32e9, .value=0x66, .type=IO_READ},
        {.addr=0x32ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0289) {
    const struct CPU_State initial_cpu = {.pc=0x1e6b, .a=0x12, .x=0x4a, .y=0xb5, .sp=0x4e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x20}, {.addr=0x1e6b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1e6c, .a=0x12, .x=0x4a, .y=0xb5, .sp=0x4e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x20}, {.addr=0x1e6b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1e6b, .value=0x66, .type=IO_READ},
        {.addr=0x1e6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_028A) {
    const struct CPU_State initial_cpu = {.pc=0xde7f, .a=0xdb, .x=0xb0, .y=0xeb, .sp=0x6e, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x78}, {.addr=0xde7f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xde80, .a=0xdb, .x=0xb0, .y=0xeb, .sp=0x6e, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x78}, {.addr=0xde7f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xde7f, .value=0x66, .type=IO_READ},
        {.addr=0xde80, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_028B) {
    const struct CPU_State initial_cpu = {.pc=0x4b28, .a=0xca, .x=0xed, .y=0x8c, .sp=0xf7, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0xf2}, {.addr=0x4b28, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4b29, .a=0xca, .x=0xed, .y=0x8c, .sp=0xf7, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0xf2}, {.addr=0x4b28, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4b28, .value=0x66, .type=IO_READ},
        {.addr=0x4b29, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_028C) {
    const struct CPU_State initial_cpu = {.pc=0xc7dc, .a=0x0c, .x=0xa1, .y=0x8c, .sp=0x57, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x68}, {.addr=0xc7dc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc7dd, .a=0x0c, .x=0xa1, .y=0x8c, .sp=0x57, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0x68}, {.addr=0xc7dc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc7dc, .value=0x66, .type=IO_READ},
        {.addr=0xc7dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_028D) {
    const struct CPU_State initial_cpu = {.pc=0x8c5d, .a=0xf0, .x=0xe0, .y=0xe3, .sp=0xa2, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x14}, {.addr=0x8c5d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8c5e, .a=0xf0, .x=0xe0, .y=0xe3, .sp=0xa2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x14}, {.addr=0x8c5d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8c5d, .value=0x66, .type=IO_READ},
        {.addr=0x8c5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_028E) {
    const struct CPU_State initial_cpu = {.pc=0x7a91, .a=0x5c, .x=0xbc, .y=0x76, .sp=0xd5, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x45}, {.addr=0x7a91, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7a92, .a=0x5c, .x=0xbc, .y=0x76, .sp=0xd5, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x45}, {.addr=0x7a91, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7a91, .value=0x66, .type=IO_READ},
        {.addr=0x7a92, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_028F) {
    const struct CPU_State initial_cpu = {.pc=0x3624, .a=0xe2, .x=0x0f, .y=0x17, .sp=0xd4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x31}, {.addr=0x3624, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3625, .a=0xe2, .x=0x0f, .y=0x17, .sp=0xd4, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x31}, {.addr=0x3624, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3624, .value=0x66, .type=IO_READ},
        {.addr=0x3625, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0290) {
    const struct CPU_State initial_cpu = {.pc=0x7f37, .a=0x4e, .x=0x75, .y=0x0c, .sp=0x55, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xd7}, {.addr=0x7f37, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7f38, .a=0x4e, .x=0x75, .y=0x0c, .sp=0x55, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xd7}, {.addr=0x7f37, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7f37, .value=0x66, .type=IO_READ},
        {.addr=0x7f38, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0291) {
    const struct CPU_State initial_cpu = {.pc=0x7f41, .a=0x5e, .x=0x27, .y=0xdd, .sp=0xf0, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xe7}, {.addr=0x7f41, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7f42, .a=0x5e, .x=0x27, .y=0xdd, .sp=0xf0, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xe7}, {.addr=0x7f41, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7f41, .value=0x66, .type=IO_READ},
        {.addr=0x7f42, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0292) {
    const struct CPU_State initial_cpu = {.pc=0xbc89, .a=0xa9, .x=0x01, .y=0x08, .sp=0xe1, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x5d}, {.addr=0xbc89, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbc8a, .a=0xa9, .x=0x01, .y=0x08, .sp=0xe1, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x5d}, {.addr=0xbc89, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbc89, .value=0x66, .type=IO_READ},
        {.addr=0xbc8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0293) {
    const struct CPU_State initial_cpu = {.pc=0x4dfb, .a=0xa2, .x=0x12, .y=0x49, .sp=0x24, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x36}, {.addr=0x4dfb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4dfc, .a=0xa2, .x=0x12, .y=0x49, .sp=0x24, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x36}, {.addr=0x4dfb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4dfb, .value=0x66, .type=IO_READ},
        {.addr=0x4dfc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0294) {
    const struct CPU_State initial_cpu = {.pc=0x4ed9, .a=0x6f, .x=0xbc, .y=0x01, .sp=0xa6, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0xa5}, {.addr=0x4ed9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4eda, .a=0x6f, .x=0xbc, .y=0x01, .sp=0xa6, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xa5}, {.addr=0x4ed9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4ed9, .value=0x66, .type=IO_READ},
        {.addr=0x4eda, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0297) {
    const struct CPU_State initial_cpu = {.pc=0x09b6, .a=0x0f, .x=0xeb, .y=0xa6, .sp=0xbf, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x00eb, .value=0x3e}, {.addr=0x09b6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x09b7, .a=0x0f, .x=0xeb, .y=0xa6, .sp=0xbf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00eb, .value=0x3e}, {.addr=0x09b6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x09b6, .value=0x66, .type=IO_READ},
        {.addr=0x09b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x00eb, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0298) {
    const struct CPU_State initial_cpu = {.pc=0x05e2, .a=0x71, .x=0x92, .y=0xd4, .sp=0x4d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x78}, {.addr=0x05e2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x05e3, .a=0x71, .x=0x92, .y=0xd4, .sp=0x4d, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x78}, {.addr=0x05e2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x05e2, .value=0x66, .type=IO_READ},
        {.addr=0x05e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0299) {
    const struct CPU_State initial_cpu = {.pc=0x6483, .a=0x46, .x=0x52, .y=0xc2, .sp=0xe9, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x19}, {.addr=0x6483, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6484, .a=0x46, .x=0x52, .y=0xc2, .sp=0xe9, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x19}, {.addr=0x6483, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6483, .value=0x66, .type=IO_READ},
        {.addr=0x6484, .value=DUMMY, .type=IO_READ},
        {.addr=0x0052, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_029A) {
    const struct CPU_State initial_cpu = {.pc=0xd04a, .a=0x14, .x=0xe7, .y=0x24, .sp=0xb8, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x00e7, .value=0x14}, {.addr=0xd04a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd04b, .a=0x14, .x=0xe7, .y=0x24, .sp=0xb8, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x00e7, .value=0x14}, {.addr=0xd04a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd04a, .value=0x66, .type=IO_READ},
        {.addr=0xd04b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e7, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_029B) {
    const struct CPU_State initial_cpu = {.pc=0x607f, .a=0xc2, .x=0x99, .y=0x01, .sp=0x1f, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0xf6}, {.addr=0x607f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6080, .a=0xc2, .x=0x99, .y=0x01, .sp=0x1f, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xf6}, {.addr=0x607f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x607f, .value=0x66, .type=IO_READ},
        {.addr=0x6080, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_029C) {
    const struct CPU_State initial_cpu = {.pc=0x7066, .a=0xeb, .x=0x6f, .y=0xbd, .sp=0x15, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x23}, {.addr=0x7066, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7067, .a=0xeb, .x=0x6f, .y=0xbd, .sp=0x15, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x23}, {.addr=0x7066, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7066, .value=0x66, .type=IO_READ},
        {.addr=0x7067, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_029D) {
    const struct CPU_State initial_cpu = {.pc=0x9298, .a=0x27, .x=0x7a, .y=0xf8, .sp=0x99, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x80}, {.addr=0x9298, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9299, .a=0x27, .x=0x7a, .y=0xf8, .sp=0x99, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0x80}, {.addr=0x9298, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9298, .value=0x66, .type=IO_READ},
        {.addr=0x9299, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_029E) {
    const struct CPU_State initial_cpu = {.pc=0xed48, .a=0xf9, .x=0x11, .y=0xed, .sp=0x9f, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x34}, {.addr=0xed48, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xed49, .a=0xf9, .x=0x11, .y=0xed, .sp=0x9f, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x34}, {.addr=0xed48, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xed48, .value=0x66, .type=IO_READ},
        {.addr=0xed49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_029F) {
    const struct CPU_State initial_cpu = {.pc=0xb8f8, .a=0x2e, .x=0x40, .y=0x50, .sp=0x80, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x86}, {.addr=0xb8f8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb8f9, .a=0x2e, .x=0x40, .y=0x50, .sp=0x80, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x86}, {.addr=0xb8f8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb8f8, .value=0x66, .type=IO_READ},
        {.addr=0xb8f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xcdee, .a=0xec, .x=0xb8, .y=0x1f, .sp=0x8c, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x5f}, {.addr=0xcdee, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcdef, .a=0xec, .x=0xb8, .y=0x1f, .sp=0x8c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x5f}, {.addr=0xcdee, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcdee, .value=0x66, .type=IO_READ},
        {.addr=0xcdef, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xe544, .a=0xd1, .x=0x43, .y=0xab, .sp=0x79, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x1b}, {.addr=0xe544, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe545, .a=0xd1, .x=0x43, .y=0xab, .sp=0x79, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x1b}, {.addr=0xe544, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe544, .value=0x66, .type=IO_READ},
        {.addr=0xe545, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x0a84, .a=0x22, .x=0x9c, .y=0xd3, .sp=0x23, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0xc2}, {.addr=0x0a84, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0a85, .a=0x22, .x=0x9c, .y=0xd3, .sp=0x23, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0xc2}, {.addr=0x0a84, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0a84, .value=0x66, .type=IO_READ},
        {.addr=0x0a85, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xd33d, .a=0x9b, .x=0x27, .y=0x81, .sp=0x10, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0xcc}, {.addr=0xd33d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd33e, .a=0x9b, .x=0x27, .y=0x81, .sp=0x10, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xcc}, {.addr=0xd33d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd33d, .value=0x66, .type=IO_READ},
        {.addr=0xd33e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x3cc7, .a=0xd4, .x=0x2d, .y=0xc3, .sp=0x86, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0xd9}, {.addr=0x3cc7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3cc8, .a=0xd4, .x=0x2d, .y=0xc3, .sp=0x86, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xd9}, {.addr=0x3cc7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3cc7, .value=0x66, .type=IO_READ},
        {.addr=0x3cc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x386b, .a=0x22, .x=0xf5, .y=0x50, .sp=0xd5, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0xa4}, {.addr=0x386b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x386c, .a=0x22, .x=0xf5, .y=0x50, .sp=0xd5, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xa4}, {.addr=0x386b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x386b, .value=0x66, .type=IO_READ},
        {.addr=0x386c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x1ca9, .a=0x32, .x=0xc2, .y=0xbf, .sp=0x58, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0xdc}, {.addr=0x1ca9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1caa, .a=0x32, .x=0xc2, .y=0xbf, .sp=0x58, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xdc}, {.addr=0x1ca9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1ca9, .value=0x66, .type=IO_READ},
        {.addr=0x1caa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x2490, .a=0xab, .x=0x4c, .y=0x1c, .sp=0x95, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0xa9}, {.addr=0x2490, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2491, .a=0xab, .x=0x4c, .y=0x1c, .sp=0x95, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xa9}, {.addr=0x2490, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2490, .value=0x66, .type=IO_READ},
        {.addr=0x2491, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xbe4e, .a=0x40, .x=0x10, .y=0xa3, .sp=0x1b, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x60}, {.addr=0xbe4e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbe4f, .a=0x40, .x=0x10, .y=0xa3, .sp=0x1b, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x60}, {.addr=0xbe4e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbe4e, .value=0x66, .type=IO_READ},
        {.addr=0xbe4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x0286, .a=0x9c, .x=0x0d, .y=0x52, .sp=0xe4, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x010d, .value=0x24}, {.addr=0x0286, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0287, .a=0x9c, .x=0x0d, .y=0x52, .sp=0xe4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x010d, .value=0x24}, {.addr=0x0286, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0286, .value=0x66, .type=IO_READ},
        {.addr=0x0287, .value=DUMMY, .type=IO_READ},
        {.addr=0x010d, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x920b, .a=0x1b, .x=0xe9, .y=0x1b, .sp=0x4e, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00e9, .value=0x2f}, {.addr=0x920b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x920c, .a=0x1b, .x=0xe9, .y=0x1b, .sp=0x4e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00e9, .value=0x2f}, {.addr=0x920b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x920b, .value=0x66, .type=IO_READ},
        {.addr=0x920c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e9, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xcc5f, .a=0xec, .x=0x83, .y=0x88, .sp=0x40, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0xc8}, {.addr=0xcc5f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcc60, .a=0xec, .x=0x83, .y=0x88, .sp=0x40, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0xc8}, {.addr=0xcc5f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcc5f, .value=0x66, .type=IO_READ},
        {.addr=0xcc60, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xfd96, .a=0xf4, .x=0x24, .y=0x41, .sp=0x6c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x71}, {.addr=0xfd96, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfd97, .a=0xf4, .x=0x24, .y=0x41, .sp=0x6c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x71}, {.addr=0xfd96, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfd96, .value=0x66, .type=IO_READ},
        {.addr=0xfd97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xd4e7, .a=0xef, .x=0x3b, .y=0x7e, .sp=0x78, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0xbe}, {.addr=0xd4e7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd4e8, .a=0xef, .x=0x3b, .y=0x7e, .sp=0x78, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0xbe}, {.addr=0xd4e7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd4e7, .value=0x66, .type=IO_READ},
        {.addr=0xd4e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x7934, .a=0x08, .x=0xe7, .y=0x80, .sp=0x24, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xcb}, {.addr=0x7934, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7935, .a=0x08, .x=0xe7, .y=0x80, .sp=0x24, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xcb}, {.addr=0x7934, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7934, .value=0x66, .type=IO_READ},
        {.addr=0x7935, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xbd19, .a=0x1f, .x=0x96, .y=0x0e, .sp=0x2b, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x52}, {.addr=0xbd19, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbd1a, .a=0x1f, .x=0x96, .y=0x0e, .sp=0x2b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x52}, {.addr=0xbd19, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbd19, .value=0x66, .type=IO_READ},
        {.addr=0xbd1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x564f, .a=0x6b, .x=0x12, .y=0x6a, .sp=0x58, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0xa2}, {.addr=0x564f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5650, .a=0x6b, .x=0x12, .y=0x6a, .sp=0x58, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xa2}, {.addr=0x564f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x564f, .value=0x66, .type=IO_READ},
        {.addr=0x5650, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xe76a, .a=0x20, .x=0x58, .y=0x79, .sp=0xfa, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0058, .value=0x7b}, {.addr=0xe76a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe76b, .a=0x20, .x=0x58, .y=0x79, .sp=0xfa, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0058, .value=0x7b}, {.addr=0xe76a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe76a, .value=0x66, .type=IO_READ},
        {.addr=0xe76b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0058, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xbf37, .a=0xd0, .x=0x0c, .y=0x50, .sp=0x3e, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x000c, .value=0x80}, {.addr=0xbf37, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbf38, .a=0xd0, .x=0x0c, .y=0x50, .sp=0x3e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x000c, .value=0x80}, {.addr=0xbf37, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbf37, .value=0x66, .type=IO_READ},
        {.addr=0xbf38, .value=DUMMY, .type=IO_READ},
        {.addr=0x000c, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x115c, .a=0x94, .x=0xbe, .y=0x5c, .sp=0xfd, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x22}, {.addr=0x115c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x115d, .a=0x94, .x=0xbe, .y=0x5c, .sp=0xfd, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x22}, {.addr=0x115c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x115c, .value=0x66, .type=IO_READ},
        {.addr=0x115d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x372f, .a=0x8a, .x=0x33, .y=0xf9, .sp=0x30, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x2a}, {.addr=0x372f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3730, .a=0x8a, .x=0x33, .y=0xf9, .sp=0x30, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x2a}, {.addr=0x372f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x372f, .value=0x66, .type=IO_READ},
        {.addr=0x3730, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x6d33, .a=0x9c, .x=0x40, .y=0xb3, .sp=0xda, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x10}, {.addr=0x6d33, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6d34, .a=0x9c, .x=0x40, .y=0xb3, .sp=0xda, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x10}, {.addr=0x6d33, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6d33, .value=0x66, .type=IO_READ},
        {.addr=0x6d34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xf5b0, .a=0xd6, .x=0x94, .y=0xac, .sp=0x3d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x20}, {.addr=0xf5b0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf5b1, .a=0xd6, .x=0x94, .y=0xac, .sp=0x3d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x20}, {.addr=0xf5b0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf5b0, .value=0x66, .type=IO_READ},
        {.addr=0xf5b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xb5d4, .a=0x21, .x=0xcb, .y=0x79, .sp=0xfd, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x23}, {.addr=0xb5d4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb5d5, .a=0x21, .x=0xcb, .y=0x79, .sp=0xfd, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x23}, {.addr=0xb5d4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb5d4, .value=0x66, .type=IO_READ},
        {.addr=0xb5d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x4d66, .a=0x02, .x=0x5d, .y=0x60, .sp=0x61, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x44}, {.addr=0x4d66, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4d67, .a=0x02, .x=0x5d, .y=0x60, .sp=0x61, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x44}, {.addr=0x4d66, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4d66, .value=0x66, .type=IO_READ},
        {.addr=0x4d67, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x5eef, .a=0x67, .x=0xf8, .y=0x05, .sp=0x7f, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x5b}, {.addr=0x5eef, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5ef0, .a=0x67, .x=0xf8, .y=0x05, .sp=0x7f, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x5b}, {.addr=0x5eef, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5eef, .value=0x66, .type=IO_READ},
        {.addr=0x5ef0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x690b, .a=0x1d, .x=0x3a, .y=0x6e, .sp=0x26, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x5f}, {.addr=0x690b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x690c, .a=0x1d, .x=0x3a, .y=0x6e, .sp=0x26, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x5f}, {.addr=0x690b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x690b, .value=0x66, .type=IO_READ},
        {.addr=0x690c, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x44f5, .a=0xa7, .x=0xc6, .y=0x73, .sp=0xc1, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x6a}, {.addr=0x44f5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x44f6, .a=0xa7, .x=0xc6, .y=0x73, .sp=0xc1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x6a}, {.addr=0x44f5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x44f5, .value=0x66, .type=IO_READ},
        {.addr=0x44f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x417f, .a=0x58, .x=0xc2, .y=0x8b, .sp=0x0c, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c2, .value=0x50}, {.addr=0x417f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4180, .a=0x58, .x=0xc2, .y=0x8b, .sp=0x0c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00c2, .value=0x50}, {.addr=0x417f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x417f, .value=0x66, .type=IO_READ},
        {.addr=0x4180, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c2, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x548c, .a=0x07, .x=0xec, .y=0x20, .sp=0xce, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0x91}, {.addr=0x548c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x548d, .a=0x07, .x=0xec, .y=0x20, .sp=0xce, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0x91}, {.addr=0x548c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x548c, .value=0x66, .type=IO_READ},
        {.addr=0x548d, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x25d3, .a=0x92, .x=0xa0, .y=0xa5, .sp=0x82, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0xb4}, {.addr=0x25d3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x25d4, .a=0x92, .x=0xa0, .y=0xa5, .sp=0x82, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0xb4}, {.addr=0x25d3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x25d3, .value=0x66, .type=IO_READ},
        {.addr=0x25d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x226f, .a=0xcb, .x=0x8b, .y=0xf2, .sp=0x36, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xba}, {.addr=0x226f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2270, .a=0xcb, .x=0x8b, .y=0xf2, .sp=0x36, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xba}, {.addr=0x226f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x226f, .value=0x66, .type=IO_READ},
        {.addr=0x2270, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x5158, .a=0xa0, .x=0xfb, .y=0xf0, .sp=0x7a, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x04}, {.addr=0x5158, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5159, .a=0xa0, .x=0xfb, .y=0xf0, .sp=0x7a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x04}, {.addr=0x5158, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5158, .value=0x66, .type=IO_READ},
        {.addr=0x5159, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C3) {
    const struct CPU_State initial_cpu = {.pc=0xa263, .a=0x02, .x=0x94, .y=0xad, .sp=0x90, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x8e}, {.addr=0xa263, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa264, .a=0x02, .x=0x94, .y=0xad, .sp=0x90, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x8e}, {.addr=0xa263, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa263, .value=0x66, .type=IO_READ},
        {.addr=0xa264, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x5565, .a=0xec, .x=0xd3, .y=0xc9, .sp=0xd3, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x6f}, {.addr=0x5565, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5566, .a=0xec, .x=0xd3, .y=0xc9, .sp=0xd3, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x6f}, {.addr=0x5565, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5565, .value=0x66, .type=IO_READ},
        {.addr=0x5566, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xdef8, .a=0x75, .x=0x31, .y=0x0f, .sp=0xe5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xd0}, {.addr=0xdef8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdef9, .a=0x75, .x=0x31, .y=0x0f, .sp=0xe5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xd0}, {.addr=0xdef8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdef8, .value=0x66, .type=IO_READ},
        {.addr=0xdef9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x4868, .a=0x01, .x=0x7a, .y=0x57, .sp=0x06, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x97}, {.addr=0x4868, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4869, .a=0x01, .x=0x7a, .y=0x57, .sp=0x06, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x97}, {.addr=0x4868, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4868, .value=0x66, .type=IO_READ},
        {.addr=0x4869, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x1736, .a=0x42, .x=0x03, .y=0xd8, .sp=0x50, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x0e}, {.addr=0x1736, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1737, .a=0x42, .x=0x03, .y=0xd8, .sp=0x50, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x0e}, {.addr=0x1736, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1736, .value=0x66, .type=IO_READ},
        {.addr=0x1737, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xd4b7, .a=0x37, .x=0xcb, .y=0xd3, .sp=0x9e, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0x48}, {.addr=0xd4b7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd4b8, .a=0x37, .x=0xcb, .y=0xd3, .sp=0x9e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0x48}, {.addr=0xd4b7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd4b7, .value=0x66, .type=IO_READ},
        {.addr=0xd4b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x2ef8, .a=0x77, .x=0x19, .y=0x8e, .sp=0x8b, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x7a}, {.addr=0x2ef8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2ef9, .a=0x77, .x=0x19, .y=0x8e, .sp=0x8b, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x7a}, {.addr=0x2ef8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2ef8, .value=0x66, .type=IO_READ},
        {.addr=0x2ef9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xe5d2, .a=0xd0, .x=0x14, .y=0x1d, .sp=0x61, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0014, .value=0x6e}, {.addr=0xe5d2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe5d3, .a=0xd0, .x=0x14, .y=0x1d, .sp=0x61, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0014, .value=0x6e}, {.addr=0xe5d2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe5d2, .value=0x66, .type=IO_READ},
        {.addr=0xe5d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0014, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xa3ad, .a=0x16, .x=0x3d, .y=0x27, .sp=0x50, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0xc0}, {.addr=0xa3ad, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa3ae, .a=0x16, .x=0x3d, .y=0x27, .sp=0x50, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0xc0}, {.addr=0xa3ad, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa3ad, .value=0x66, .type=IO_READ},
        {.addr=0xa3ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x7f87, .a=0xd8, .x=0x6c, .y=0xdf, .sp=0x5f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0x9d}, {.addr=0x7f87, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7f88, .a=0xd8, .x=0x6c, .y=0xdf, .sp=0x5f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0x9d}, {.addr=0x7f87, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7f87, .value=0x66, .type=IO_READ},
        {.addr=0x7f88, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x197f, .a=0x06, .x=0xea, .y=0x88, .sp=0x3e, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x24}, {.addr=0x197f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1980, .a=0x06, .x=0xea, .y=0x88, .sp=0x3e, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x24}, {.addr=0x197f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x197f, .value=0x66, .type=IO_READ},
        {.addr=0x1980, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x7a39, .a=0x65, .x=0x42, .y=0x7a, .sp=0xd5, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0042, .value=0xf4}, {.addr=0x7a39, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7a3a, .a=0x65, .x=0x42, .y=0x7a, .sp=0xd5, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0042, .value=0xf4}, {.addr=0x7a39, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7a39, .value=0x66, .type=IO_READ},
        {.addr=0x7a3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0042, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xda01, .a=0xb4, .x=0x74, .y=0xe7, .sp=0xd7, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0xb6}, {.addr=0xda01, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xda02, .a=0xb4, .x=0x74, .y=0xe7, .sp=0xd7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xb6}, {.addr=0xda01, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xda01, .value=0x66, .type=IO_READ},
        {.addr=0xda02, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x37aa, .a=0x52, .x=0x96, .y=0x51, .sp=0x10, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x0a}, {.addr=0x37aa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x37ab, .a=0x52, .x=0x96, .y=0x51, .sp=0x10, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x0a}, {.addr=0x37aa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x37aa, .value=0x66, .type=IO_READ},
        {.addr=0x37ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xc8c1, .a=0x21, .x=0x2b, .y=0x7e, .sp=0xb9, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0x84}, {.addr=0xc8c1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc8c2, .a=0x21, .x=0x2b, .y=0x7e, .sp=0xb9, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0x84}, {.addr=0xc8c1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc8c1, .value=0x66, .type=IO_READ},
        {.addr=0xc8c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x1cb1, .a=0x7d, .x=0xad, .y=0xb5, .sp=0x89, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ad, .value=0x4f}, {.addr=0x1cb1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1cb2, .a=0x7d, .x=0xad, .y=0xb5, .sp=0x89, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00ad, .value=0x4f}, {.addr=0x1cb1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1cb1, .value=0x66, .type=IO_READ},
        {.addr=0x1cb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ad, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x3120, .a=0x63, .x=0x10, .y=0x9f, .sp=0x9f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0xc5}, {.addr=0x3120, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3121, .a=0x63, .x=0x10, .y=0x9f, .sp=0x9f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0xc5}, {.addr=0x3120, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3120, .value=0x66, .type=IO_READ},
        {.addr=0x3121, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x38d1, .a=0x45, .x=0x46, .y=0x6e, .sp=0x2b, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0xed}, {.addr=0x38d1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x38d2, .a=0x45, .x=0x46, .y=0x6e, .sp=0x2b, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xed}, {.addr=0x38d1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x38d1, .value=0x66, .type=IO_READ},
        {.addr=0x38d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x3682, .a=0xe0, .x=0x70, .y=0x85, .sp=0x33, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x71}, {.addr=0x3682, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3683, .a=0xe0, .x=0x70, .y=0x85, .sp=0x33, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x71}, {.addr=0x3682, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3682, .value=0x66, .type=IO_READ},
        {.addr=0x3683, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x4326, .a=0x02, .x=0x1c, .y=0x48, .sp=0x1a, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x001c, .value=0xfd}, {.addr=0x4326, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4327, .a=0x02, .x=0x1c, .y=0x48, .sp=0x1a, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x001c, .value=0xfd}, {.addr=0x4326, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4326, .value=0x66, .type=IO_READ},
        {.addr=0x4327, .value=DUMMY, .type=IO_READ},
        {.addr=0x001c, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x1725, .a=0x79, .x=0x37, .y=0x31, .sp=0xe5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0037, .value=0xd8}, {.addr=0x1725, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1726, .a=0x79, .x=0x37, .y=0x31, .sp=0xe5, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0037, .value=0xd8}, {.addr=0x1725, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1725, .value=0x66, .type=IO_READ},
        {.addr=0x1726, .value=DUMMY, .type=IO_READ},
        {.addr=0x0037, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x73ed, .a=0x36, .x=0x9e, .y=0x24, .sp=0x16, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x28}, {.addr=0x73ed, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x73ee, .a=0x36, .x=0x9e, .y=0x24, .sp=0x16, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x28}, {.addr=0x73ed, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x73ed, .value=0x66, .type=IO_READ},
        {.addr=0x73ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x2170, .a=0x86, .x=0xe3, .y=0x00, .sp=0x71, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00e3, .value=0xec}, {.addr=0x2170, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2171, .a=0x86, .x=0xe3, .y=0x00, .sp=0x71, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00e3, .value=0xec}, {.addr=0x2170, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2170, .value=0x66, .type=IO_READ},
        {.addr=0x2171, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e3, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xf7c6, .a=0x2d, .x=0xbf, .y=0xe2, .sp=0x7c, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x78}, {.addr=0xf7c6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf7c7, .a=0x2d, .x=0xbf, .y=0xe2, .sp=0x7c, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x78}, {.addr=0xf7c6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf7c6, .value=0x66, .type=IO_READ},
        {.addr=0xf7c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x2e6a, .a=0xd7, .x=0x7b, .y=0x9b, .sp=0x83, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0xbe}, {.addr=0x2e6a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2e6b, .a=0xd7, .x=0x7b, .y=0x9b, .sp=0x83, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xbe}, {.addr=0x2e6a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2e6a, .value=0x66, .type=IO_READ},
        {.addr=0x2e6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x17aa, .a=0x71, .x=0xdd, .y=0xb3, .sp=0x4f, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x00dd, .value=0x55}, {.addr=0x17aa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x17ab, .a=0x71, .x=0xdd, .y=0xb3, .sp=0x4f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00dd, .value=0x55}, {.addr=0x17aa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x17aa, .value=0x66, .type=IO_READ},
        {.addr=0x17ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dd, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x0807, .a=0x70, .x=0x97, .y=0xdf, .sp=0xa4, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0097, .value=0x3b}, {.addr=0x0807, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0808, .a=0x70, .x=0x97, .y=0xdf, .sp=0xa4, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0097, .value=0x3b}, {.addr=0x0807, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0807, .value=0x66, .type=IO_READ},
        {.addr=0x0808, .value=DUMMY, .type=IO_READ},
        {.addr=0x0097, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xb2e2, .a=0x1e, .x=0x66, .y=0xf1, .sp=0x66, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x0d}, {.addr=0xb2e2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb2e3, .a=0x1e, .x=0x66, .y=0xf1, .sp=0x66, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x0d}, {.addr=0xb2e2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb2e2, .value=0x66, .type=IO_READ},
        {.addr=0xb2e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xb211, .a=0x70, .x=0x31, .y=0x6f, .sp=0x57, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x6d}, {.addr=0xb211, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb212, .a=0x70, .x=0x31, .y=0x6f, .sp=0x57, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x6d}, {.addr=0xb211, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb211, .value=0x66, .type=IO_READ},
        {.addr=0xb212, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x3a82, .a=0x2f, .x=0xb3, .y=0x8c, .sp=0xfc, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00b3, .value=0x5d}, {.addr=0x3a82, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3a83, .a=0x2f, .x=0xb3, .y=0x8c, .sp=0xfc, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00b3, .value=0x5d}, {.addr=0x3a82, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3a82, .value=0x66, .type=IO_READ},
        {.addr=0x3a83, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b3, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xfb1c, .a=0xd8, .x=0xbb, .y=0x20, .sp=0x59, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x97}, {.addr=0xfb1c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfb1d, .a=0xd8, .x=0xbb, .y=0x20, .sp=0x59, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0x97}, {.addr=0xfb1c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfb1c, .value=0x66, .type=IO_READ},
        {.addr=0xfb1d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x18bf, .a=0x8d, .x=0x21, .y=0x87, .sp=0x6d, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x47}, {.addr=0x18bf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x18c0, .a=0x8d, .x=0x21, .y=0x87, .sp=0x6d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x47}, {.addr=0x18bf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x18bf, .value=0x66, .type=IO_READ},
        {.addr=0x18c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x237b, .a=0xf1, .x=0x67, .y=0x48, .sp=0x74, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x7f}, {.addr=0x237b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x237c, .a=0xf1, .x=0x67, .y=0x48, .sp=0x74, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x7f}, {.addr=0x237b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x237b, .value=0x66, .type=IO_READ},
        {.addr=0x237c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xeb9b, .a=0xf6, .x=0xa2, .y=0x79, .sp=0x6c, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x3c}, {.addr=0xeb9b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xeb9c, .a=0xf6, .x=0xa2, .y=0x79, .sp=0x6c, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x3c}, {.addr=0xeb9b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xeb9b, .value=0x66, .type=IO_READ},
        {.addr=0xeb9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x1341, .a=0xbf, .x=0x6b, .y=0x2b, .sp=0x76, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x02}, {.addr=0x1341, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1342, .a=0xbf, .x=0x6b, .y=0x2b, .sp=0x76, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x02}, {.addr=0x1341, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1341, .value=0x66, .type=IO_READ},
        {.addr=0x1342, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x4453, .a=0x12, .x=0xd8, .y=0x22, .sp=0x1d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x4a}, {.addr=0x4453, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4454, .a=0x12, .x=0xd8, .y=0x22, .sp=0x1d, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x4a}, {.addr=0x4453, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4453, .value=0x66, .type=IO_READ},
        {.addr=0x4454, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x6fe5, .a=0x5c, .x=0xa0, .y=0x92, .sp=0x63, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x00a0, .value=0x42}, {.addr=0x6fe5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6fe6, .a=0x5c, .x=0xa0, .y=0x92, .sp=0x63, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x00a0, .value=0x42}, {.addr=0x6fe5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6fe5, .value=0x66, .type=IO_READ},
        {.addr=0x6fe6, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a0, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x9ecf, .a=0x5a, .x=0x9b, .y=0x1d, .sp=0xe0, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x009b, .value=0xf2}, {.addr=0x9ecf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9ed0, .a=0x5a, .x=0x9b, .y=0x1d, .sp=0xe0, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x009b, .value=0xf2}, {.addr=0x9ecf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9ecf, .value=0x66, .type=IO_READ},
        {.addr=0x9ed0, .value=DUMMY, .type=IO_READ},
        {.addr=0x009b, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x6fd2, .a=0xd5, .x=0xd3, .y=0x6c, .sp=0xc6, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x00d3, .value=0x4b}, {.addr=0x6fd2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6fd3, .a=0xd5, .x=0xd3, .y=0x6c, .sp=0xc6, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x00d3, .value=0x4b}, {.addr=0x6fd2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6fd2, .value=0x66, .type=IO_READ},
        {.addr=0x6fd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d3, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x4bb0, .a=0xcf, .x=0x05, .y=0x5d, .sp=0x67, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0005, .value=0x58}, {.addr=0x4bb0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4bb1, .a=0xcf, .x=0x05, .y=0x5d, .sp=0x67, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0005, .value=0x58}, {.addr=0x4bb0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4bb0, .value=0x66, .type=IO_READ},
        {.addr=0x4bb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0005, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x9094, .a=0xb9, .x=0xcc, .y=0xc6, .sp=0xa6, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x1b}, {.addr=0x9094, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9095, .a=0xb9, .x=0xcc, .y=0xc6, .sp=0xa6, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x1b}, {.addr=0x9094, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9094, .value=0x66, .type=IO_READ},
        {.addr=0x9095, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xe137, .a=0x3a, .x=0xd7, .y=0x50, .sp=0x7b, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0xe2}, {.addr=0xe137, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe138, .a=0x3a, .x=0xd7, .y=0x50, .sp=0x7b, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0xe2}, {.addr=0xe137, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe137, .value=0x66, .type=IO_READ},
        {.addr=0xe138, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x776d, .a=0x7b, .x=0xb9, .y=0xb8, .sp=0x46, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0xb9}, {.addr=0x776d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x776e, .a=0x7b, .x=0xb9, .y=0xb8, .sp=0x46, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0xb9}, {.addr=0x776d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x776d, .value=0x66, .type=IO_READ},
        {.addr=0x776e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x11ff, .a=0x2b, .x=0x51, .y=0xa6, .sp=0x9e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0051, .value=0x99}, {.addr=0x11ff, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1200, .a=0x2b, .x=0x51, .y=0xa6, .sp=0x9e, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0051, .value=0x99}, {.addr=0x11ff, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x11ff, .value=0x66, .type=IO_READ},
        {.addr=0x1200, .value=DUMMY, .type=IO_READ},
        {.addr=0x0051, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x569d, .a=0x3d, .x=0xd8, .y=0xab, .sp=0xa7, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x00d8, .value=0x0d}, {.addr=0x569d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x569e, .a=0x3d, .x=0xd8, .y=0xab, .sp=0xa7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00d8, .value=0x0d}, {.addr=0x569d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x569d, .value=0x66, .type=IO_READ},
        {.addr=0x569e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d8, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xe925, .a=0xc3, .x=0x17, .y=0x43, .sp=0x43, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0xf1}, {.addr=0xe925, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe926, .a=0xc3, .x=0x17, .y=0x43, .sp=0x43, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xf1}, {.addr=0xe925, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe925, .value=0x66, .type=IO_READ},
        {.addr=0xe926, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xfb98, .a=0x16, .x=0x6c, .y=0xd6, .sp=0x6a, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x006c, .value=0xcd}, {.addr=0xfb98, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfb99, .a=0x16, .x=0x6c, .y=0xd6, .sp=0x6a, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x006c, .value=0xcd}, {.addr=0xfb98, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfb98, .value=0x66, .type=IO_READ},
        {.addr=0xfb99, .value=DUMMY, .type=IO_READ},
        {.addr=0x006c, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x0d5d, .a=0xcc, .x=0x84, .y=0x64, .sp=0x88, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x63}, {.addr=0x0d5d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0d5e, .a=0xcc, .x=0x84, .y=0x64, .sp=0x88, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x63}, {.addr=0x0d5d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0d5d, .value=0x66, .type=IO_READ},
        {.addr=0x0d5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xf720, .a=0xe4, .x=0x48, .y=0x6a, .sp=0x3b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x4b}, {.addr=0xf720, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf721, .a=0xe4, .x=0x48, .y=0x6a, .sp=0x3b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x4b}, {.addr=0xf720, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf720, .value=0x66, .type=IO_READ},
        {.addr=0xf721, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x7ac4, .a=0x0d, .x=0x81, .y=0x84, .sp=0x01, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x4c}, {.addr=0x7ac4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7ac5, .a=0x0d, .x=0x81, .y=0x84, .sp=0x01, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x4c}, {.addr=0x7ac4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7ac4, .value=0x66, .type=IO_READ},
        {.addr=0x7ac5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xa0e8, .a=0xbd, .x=0x3a, .y=0x75, .sp=0xb9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0xf5}, {.addr=0xa0e8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa0e9, .a=0xbd, .x=0x3a, .y=0x75, .sp=0xb9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0xf5}, {.addr=0xa0e8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa0e8, .value=0x66, .type=IO_READ},
        {.addr=0xa0e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x003a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x9a99, .a=0xc5, .x=0x31, .y=0x8e, .sp=0x64, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0x89}, {.addr=0x9a99, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9a9a, .a=0xc5, .x=0x31, .y=0x8e, .sp=0x64, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0x89}, {.addr=0x9a99, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9a99, .value=0x66, .type=IO_READ},
        {.addr=0x9a9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xdf54, .a=0x3e, .x=0x52, .y=0x3e, .sp=0x63, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x97}, {.addr=0xdf54, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdf55, .a=0x3e, .x=0x52, .y=0x3e, .sp=0x63, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0x97}, {.addr=0xdf54, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdf54, .value=0x66, .type=IO_READ},
        {.addr=0xdf55, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xdd9f, .a=0x1a, .x=0xee, .y=0xfe, .sp=0xb9, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0x0f}, {.addr=0xdd9f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdda0, .a=0x1a, .x=0xee, .y=0xfe, .sp=0xb9, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0x0f}, {.addr=0xdd9f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdd9f, .value=0x66, .type=IO_READ},
        {.addr=0xdda0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xf884, .a=0x65, .x=0x73, .y=0xc2, .sp=0xd1, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x20}, {.addr=0xf884, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf885, .a=0x65, .x=0x73, .y=0xc2, .sp=0xd1, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x20}, {.addr=0xf884, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf884, .value=0x66, .type=IO_READ},
        {.addr=0xf885, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xb017, .a=0x5b, .x=0x50, .y=0x22, .sp=0xc3, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0x55}, {.addr=0xb017, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb018, .a=0x5b, .x=0x50, .y=0x22, .sp=0xc3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0x55}, {.addr=0xb017, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb017, .value=0x66, .type=IO_READ},
        {.addr=0xb018, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x1edc, .a=0x3a, .x=0xb6, .y=0xcf, .sp=0x7f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00b6, .value=0xfd}, {.addr=0x1edc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1edd, .a=0x3a, .x=0xb6, .y=0xcf, .sp=0x7f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00b6, .value=0xfd}, {.addr=0x1edc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1edc, .value=0x66, .type=IO_READ},
        {.addr=0x1edd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b6, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0300) {
    const struct CPU_State initial_cpu = {.pc=0x4651, .a=0x19, .x=0x6a, .y=0xb8, .sp=0x9e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xe4}, {.addr=0x4651, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4652, .a=0x19, .x=0x6a, .y=0xb8, .sp=0x9e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xe4}, {.addr=0x4651, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4651, .value=0x66, .type=IO_READ},
        {.addr=0x4652, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0301) {
    const struct CPU_State initial_cpu = {.pc=0xdf73, .a=0xdb, .x=0xb6, .y=0x57, .sp=0x45, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x3e}, {.addr=0xdf73, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xdf74, .a=0xdb, .x=0xb6, .y=0x57, .sp=0x45, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x3e}, {.addr=0xdf73, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xdf73, .value=0x66, .type=IO_READ},
        {.addr=0xdf74, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0302) {
    const struct CPU_State initial_cpu = {.pc=0x9b41, .a=0xf3, .x=0xd5, .y=0x29, .sp=0x9b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x00d5, .value=0xb4}, {.addr=0x9b41, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9b42, .a=0xf3, .x=0xd5, .y=0x29, .sp=0x9b, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00d5, .value=0xb4}, {.addr=0x9b41, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9b41, .value=0x66, .type=IO_READ},
        {.addr=0x9b42, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d5, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0303) {
    const struct CPU_State initial_cpu = {.pc=0xafd5, .a=0xe9, .x=0xc2, .y=0xcb, .sp=0x30, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x6a}, {.addr=0xafd5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xafd6, .a=0xe9, .x=0xc2, .y=0xcb, .sp=0x30, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x6a}, {.addr=0xafd5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xafd5, .value=0x66, .type=IO_READ},
        {.addr=0xafd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0304) {
    const struct CPU_State initial_cpu = {.pc=0x6c75, .a=0xe9, .x=0x81, .y=0xae, .sp=0x10, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x29}, {.addr=0x6c75, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6c76, .a=0xe9, .x=0x81, .y=0xae, .sp=0x10, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x29}, {.addr=0x6c75, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6c75, .value=0x66, .type=IO_READ},
        {.addr=0x6c76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0305) {
    const struct CPU_State initial_cpu = {.pc=0x4577, .a=0x96, .x=0xa5, .y=0x2c, .sp=0x2b, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00a5, .value=0xcd}, {.addr=0x4577, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4578, .a=0x96, .x=0xa5, .y=0x2c, .sp=0x2b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00a5, .value=0xcd}, {.addr=0x4577, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4577, .value=0x66, .type=IO_READ},
        {.addr=0x4578, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a5, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0306) {
    const struct CPU_State initial_cpu = {.pc=0x74a5, .a=0xf3, .x=0x64, .y=0x86, .sp=0xf5, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x38}, {.addr=0x74a5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x74a6, .a=0xf3, .x=0x64, .y=0x86, .sp=0xf5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x38}, {.addr=0x74a5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x74a5, .value=0x66, .type=IO_READ},
        {.addr=0x74a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0064, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0307) {
    const struct CPU_State initial_cpu = {.pc=0x382b, .a=0x18, .x=0xcf, .y=0x30, .sp=0xde, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xa0}, {.addr=0x382b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x382c, .a=0x18, .x=0xcf, .y=0x30, .sp=0xde, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xa0}, {.addr=0x382b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x382b, .value=0x66, .type=IO_READ},
        {.addr=0x382c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0308) {
    const struct CPU_State initial_cpu = {.pc=0xbe8e, .a=0x9c, .x=0x4b, .y=0x3f, .sp=0x2b, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xd1}, {.addr=0xbe8e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbe8f, .a=0x9c, .x=0x4b, .y=0x3f, .sp=0x2b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xd1}, {.addr=0xbe8e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbe8e, .value=0x66, .type=IO_READ},
        {.addr=0xbe8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0309) {
    const struct CPU_State initial_cpu = {.pc=0x893e, .a=0x3c, .x=0xea, .y=0x7b, .sp=0x0d, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x00ea, .value=0x35}, {.addr=0x893e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x893f, .a=0x3c, .x=0xea, .y=0x7b, .sp=0x0d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x00ea, .value=0x35}, {.addr=0x893e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x893e, .value=0x66, .type=IO_READ},
        {.addr=0x893f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_030A) {
    const struct CPU_State initial_cpu = {.pc=0xb25a, .a=0x50, .x=0xef, .y=0x84, .sp=0x76, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0xee}, {.addr=0xb25a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb25b, .a=0x50, .x=0xef, .y=0x84, .sp=0x76, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xee}, {.addr=0xb25a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb25a, .value=0x66, .type=IO_READ},
        {.addr=0xb25b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_030B) {
    const struct CPU_State initial_cpu = {.pc=0x0dbe, .a=0x69, .x=0xeb, .y=0x5c, .sp=0x77, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0xed}, {.addr=0x0dbe, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0dbf, .a=0x69, .x=0xeb, .y=0x5c, .sp=0x77, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0xed}, {.addr=0x0dbe, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0dbe, .value=0x66, .type=IO_READ},
        {.addr=0x0dbf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_030C) {
    const struct CPU_State initial_cpu = {.pc=0x5974, .a=0x0c, .x=0x5a, .y=0xb0, .sp=0xab, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x9c}, {.addr=0x5974, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5975, .a=0x0c, .x=0x5a, .y=0xb0, .sp=0xab, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x9c}, {.addr=0x5974, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5974, .value=0x66, .type=IO_READ},
        {.addr=0x5975, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_030D) {
    const struct CPU_State initial_cpu = {.pc=0xc851, .a=0x93, .x=0x16, .y=0x77, .sp=0xc6, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0xe0}, {.addr=0xc851, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc852, .a=0x93, .x=0x16, .y=0x77, .sp=0xc6, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xe0}, {.addr=0xc851, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc851, .value=0x66, .type=IO_READ},
        {.addr=0xc852, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_030E) {
    const struct CPU_State initial_cpu = {.pc=0x5347, .a=0x04, .x=0xef, .y=0xef, .sp=0x3c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x00ef, .value=0x97}, {.addr=0x5347, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5348, .a=0x04, .x=0xef, .y=0xef, .sp=0x3c, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x00ef, .value=0x97}, {.addr=0x5347, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5347, .value=0x66, .type=IO_READ},
        {.addr=0x5348, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ef, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_030F) {
    const struct CPU_State initial_cpu = {.pc=0x70fc, .a=0xe2, .x=0x50, .y=0xab, .sp=0x77, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0050, .value=0xa3}, {.addr=0x70fc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x70fd, .a=0xe2, .x=0x50, .y=0xab, .sp=0x77, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0050, .value=0xa3}, {.addr=0x70fc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x70fc, .value=0x66, .type=IO_READ},
        {.addr=0x70fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0050, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0310) {
    const struct CPU_State initial_cpu = {.pc=0x7eb8, .a=0x3f, .x=0x7a, .y=0xb3, .sp=0xff, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x007a, .value=0x3d}, {.addr=0x7eb8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7eb9, .a=0x3f, .x=0x7a, .y=0xb3, .sp=0xff, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x007a, .value=0x3d}, {.addr=0x7eb8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7eb8, .value=0x66, .type=IO_READ},
        {.addr=0x7eb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x007a, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0311) {
    const struct CPU_State initial_cpu = {.pc=0x4b9b, .a=0x8f, .x=0xfe, .y=0x0a, .sp=0xcf, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x54}, {.addr=0x4b9b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4b9c, .a=0x8f, .x=0xfe, .y=0x0a, .sp=0xcf, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x54}, {.addr=0x4b9b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4b9b, .value=0x66, .type=IO_READ},
        {.addr=0x4b9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0312) {
    const struct CPU_State initial_cpu = {.pc=0x847f, .a=0x11, .x=0x9c, .y=0xfe, .sp=0xfe, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x3a}, {.addr=0x847f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8480, .a=0x11, .x=0x9c, .y=0xfe, .sp=0xfe, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x3a}, {.addr=0x847f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x847f, .value=0x66, .type=IO_READ},
        {.addr=0x8480, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0313) {
    const struct CPU_State initial_cpu = {.pc=0x6418, .a=0x11, .x=0x22, .y=0xfb, .sp=0x28, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x6418, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6419, .a=0x11, .x=0x22, .y=0xfb, .sp=0x28, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x6418, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6418, .value=0x66, .type=IO_READ},
        {.addr=0x6419, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0314) {
    const struct CPU_State initial_cpu = {.pc=0xda8c, .a=0x44, .x=0xcf, .y=0xde, .sp=0xf2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0xe8}, {.addr=0xda8c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xda8d, .a=0x44, .x=0xcf, .y=0xde, .sp=0xf2, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xe8}, {.addr=0xda8c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xda8c, .value=0x66, .type=IO_READ},
        {.addr=0xda8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0315) {
    const struct CPU_State initial_cpu = {.pc=0xac91, .a=0xcc, .x=0x07, .y=0x70, .sp=0xf9, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0007, .value=0x70}, {.addr=0xac91, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xac92, .a=0xcc, .x=0x07, .y=0x70, .sp=0xf9, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0007, .value=0x70}, {.addr=0xac91, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xac91, .value=0x66, .type=IO_READ},
        {.addr=0xac92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0007, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0316) {
    const struct CPU_State initial_cpu = {.pc=0xb529, .a=0x1b, .x=0xd9, .y=0xd2, .sp=0x12, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x91}, {.addr=0xb529, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb52a, .a=0x1b, .x=0xd9, .y=0xd2, .sp=0x12, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x91}, {.addr=0xb529, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb529, .value=0x66, .type=IO_READ},
        {.addr=0xb52a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0317) {
    const struct CPU_State initial_cpu = {.pc=0x52a0, .a=0x59, .x=0x61, .y=0xf1, .sp=0x8d, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0061, .value=0x0b}, {.addr=0x52a0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x52a1, .a=0x59, .x=0x61, .y=0xf1, .sp=0x8d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0061, .value=0x0b}, {.addr=0x52a0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x52a0, .value=0x66, .type=IO_READ},
        {.addr=0x52a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0061, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0318) {
    const struct CPU_State initial_cpu = {.pc=0x772b, .a=0xb6, .x=0x6a, .y=0x60, .sp=0x00, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x006a, .value=0xb2}, {.addr=0x772b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x772c, .a=0xb6, .x=0x6a, .y=0x60, .sp=0x00, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x006a, .value=0xb2}, {.addr=0x772b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x772b, .value=0x66, .type=IO_READ},
        {.addr=0x772c, .value=DUMMY, .type=IO_READ},
        {.addr=0x006a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0319) {
    const struct CPU_State initial_cpu = {.pc=0x56f9, .a=0xf9, .x=0xf8, .y=0xcb, .sp=0x32, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0xc5}, {.addr=0x56f9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x56fa, .a=0xf9, .x=0xf8, .y=0xcb, .sp=0x32, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xc5}, {.addr=0x56f9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x56f9, .value=0x66, .type=IO_READ},
        {.addr=0x56fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_031A) {
    const struct CPU_State initial_cpu = {.pc=0xc301, .a=0xc6, .x=0x02, .y=0x78, .sp=0xe7, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0xb7}, {.addr=0xc301, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc302, .a=0xc6, .x=0x02, .y=0x78, .sp=0xe7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xb7}, {.addr=0xc301, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc301, .value=0x66, .type=IO_READ},
        {.addr=0xc302, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_031B) {
    const struct CPU_State initial_cpu = {.pc=0x5b92, .a=0xdc, .x=0x93, .y=0xc0, .sp=0xf4, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0xd6}, {.addr=0x5b92, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5b93, .a=0xdc, .x=0x93, .y=0xc0, .sp=0xf4, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xd6}, {.addr=0x5b92, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5b92, .value=0x66, .type=IO_READ},
        {.addr=0x5b93, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_031C) {
    const struct CPU_State initial_cpu = {.pc=0xa0ac, .a=0x68, .x=0xa0, .y=0x04, .sp=0x8e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x7a}, {.addr=0xa0ac, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa0ad, .a=0x68, .x=0xa0, .y=0x04, .sp=0x8e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x7a}, {.addr=0xa0ac, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa0ac, .value=0x66, .type=IO_READ},
        {.addr=0xa0ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_031D) {
    const struct CPU_State initial_cpu = {.pc=0x8a22, .a=0xbf, .x=0x16, .y=0x5d, .sp=0x36, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0x37}, {.addr=0x8a22, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8a23, .a=0xbf, .x=0x16, .y=0x5d, .sp=0x36, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0x37}, {.addr=0x8a22, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8a22, .value=0x66, .type=IO_READ},
        {.addr=0x8a23, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_031E) {
    const struct CPU_State initial_cpu = {.pc=0xedaa, .a=0x68, .x=0x10, .y=0x39, .sp=0xbd, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0010, .value=0x76}, {.addr=0xedaa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xedab, .a=0x68, .x=0x10, .y=0x39, .sp=0xbd, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0010, .value=0x76}, {.addr=0xedaa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xedaa, .value=0x66, .type=IO_READ},
        {.addr=0xedab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0010, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_031F) {
    const struct CPU_State initial_cpu = {.pc=0x2716, .a=0x93, .x=0x6a, .y=0x06, .sp=0x34, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xae}, {.addr=0x2716, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2717, .a=0x93, .x=0x6a, .y=0x06, .sp=0x34, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xae}, {.addr=0x2716, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2716, .value=0x66, .type=IO_READ},
        {.addr=0x2717, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0320) {
    const struct CPU_State initial_cpu = {.pc=0xcb8d, .a=0x46, .x=0x7d, .y=0x76, .sp=0xec, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x79}, {.addr=0xcb8d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcb8e, .a=0x46, .x=0x7d, .y=0x76, .sp=0xec, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x79}, {.addr=0xcb8d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcb8d, .value=0x66, .type=IO_READ},
        {.addr=0xcb8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0321) {
    const struct CPU_State initial_cpu = {.pc=0xe5a0, .a=0x94, .x=0x35, .y=0xfb, .sp=0x57, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0xfe}, {.addr=0xe5a0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe5a1, .a=0x94, .x=0x35, .y=0xfb, .sp=0x57, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0xfe}, {.addr=0xe5a0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe5a0, .value=0x66, .type=IO_READ},
        {.addr=0xe5a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0035, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0322) {
    const struct CPU_State initial_cpu = {.pc=0x05d3, .a=0x5f, .x=0x09, .y=0x0e, .sp=0xd0, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xfb}, {.addr=0x05d3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x05d4, .a=0x5f, .x=0x09, .y=0x0e, .sp=0xd0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xfb}, {.addr=0x05d3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x05d3, .value=0x66, .type=IO_READ},
        {.addr=0x05d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0323) {
    const struct CPU_State initial_cpu = {.pc=0x1177, .a=0x03, .x=0xd6, .y=0x92, .sp=0x13, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xb7}, {.addr=0x1177, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1178, .a=0x03, .x=0xd6, .y=0x92, .sp=0x13, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xb7}, {.addr=0x1177, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1177, .value=0x66, .type=IO_READ},
        {.addr=0x1178, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0324) {
    const struct CPU_State initial_cpu = {.pc=0x54a3, .a=0xc3, .x=0xb2, .y=0x97, .sp=0xcb, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x00b2, .value=0x8f}, {.addr=0x54a3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x54a4, .a=0xc3, .x=0xb2, .y=0x97, .sp=0xcb, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x00b2, .value=0x8f}, {.addr=0x54a3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x54a3, .value=0x66, .type=IO_READ},
        {.addr=0x54a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b2, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0325) {
    const struct CPU_State initial_cpu = {.pc=0x6484, .a=0x8e, .x=0xee, .y=0xd3, .sp=0x33, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00ee, .value=0xac}, {.addr=0x6484, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6485, .a=0x8e, .x=0xee, .y=0xd3, .sp=0x33, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00ee, .value=0xac}, {.addr=0x6484, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6484, .value=0x66, .type=IO_READ},
        {.addr=0x6485, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ee, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0326) {
    const struct CPU_State initial_cpu = {.pc=0xe18f, .a=0xb2, .x=0xe7, .y=0x9e, .sp=0xc4, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0xb5}, {.addr=0xe18f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe190, .a=0xb2, .x=0xe7, .y=0x9e, .sp=0xc4, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0xb5}, {.addr=0xe18f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe18f, .value=0x66, .type=IO_READ},
        {.addr=0xe190, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0327) {
    const struct CPU_State initial_cpu = {.pc=0x6540, .a=0x9a, .x=0xa5, .y=0xcc, .sp=0x89, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x5e}, {.addr=0x6540, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6541, .a=0x9a, .x=0xa5, .y=0xcc, .sp=0x89, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x5e}, {.addr=0x6540, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6540, .value=0x66, .type=IO_READ},
        {.addr=0x6541, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0328) {
    const struct CPU_State initial_cpu = {.pc=0x115d, .a=0x53, .x=0x6d, .y=0xd6, .sp=0xac, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x006d, .value=0x32}, {.addr=0x115d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x115e, .a=0x53, .x=0x6d, .y=0xd6, .sp=0xac, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x006d, .value=0x32}, {.addr=0x115d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x115d, .value=0x66, .type=IO_READ},
        {.addr=0x115e, .value=DUMMY, .type=IO_READ},
        {.addr=0x006d, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0329) {
    const struct CPU_State initial_cpu = {.pc=0xb069, .a=0x62, .x=0xe0, .y=0x56, .sp=0x94, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x00e0, .value=0x1a}, {.addr=0xb069, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb06a, .a=0x62, .x=0xe0, .y=0x56, .sp=0x94, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00e0, .value=0x1a}, {.addr=0xb069, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb069, .value=0x66, .type=IO_READ},
        {.addr=0xb06a, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e0, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_032A) {
    const struct CPU_State initial_cpu = {.pc=0xa940, .a=0xe9, .x=0x49, .y=0x19, .sp=0x5b, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0xf5}, {.addr=0xa940, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa941, .a=0xe9, .x=0x49, .y=0x19, .sp=0x5b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xf5}, {.addr=0xa940, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa940, .value=0x66, .type=IO_READ},
        {.addr=0xa941, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_032B) {
    const struct CPU_State initial_cpu = {.pc=0xa3b0, .a=0x3a, .x=0x63, .y=0x89, .sp=0x0f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x2a}, {.addr=0xa3b0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa3b1, .a=0x3a, .x=0x63, .y=0x89, .sp=0x0f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x2a}, {.addr=0xa3b0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa3b0, .value=0x66, .type=IO_READ},
        {.addr=0xa3b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_032C) {
    const struct CPU_State initial_cpu = {.pc=0xb86f, .a=0x06, .x=0xa6, .y=0xb1, .sp=0x52, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x00a6, .value=0xd5}, {.addr=0xb86f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb870, .a=0x06, .x=0xa6, .y=0xb1, .sp=0x52, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x00a6, .value=0xd5}, {.addr=0xb86f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb86f, .value=0x66, .type=IO_READ},
        {.addr=0xb870, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a6, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_032D) {
    const struct CPU_State initial_cpu = {.pc=0x9af8, .a=0xb6, .x=0xa4, .y=0x3d, .sp=0x22, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00a4, .value=0x9d}, {.addr=0x9af8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9af9, .a=0xb6, .x=0xa4, .y=0x3d, .sp=0x22, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x00a4, .value=0x9d}, {.addr=0x9af8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9af8, .value=0x66, .type=IO_READ},
        {.addr=0x9af9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a4, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_032E) {
    const struct CPU_State initial_cpu = {.pc=0x8ea4, .a=0x33, .x=0xe2, .y=0x91, .sp=0x18, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0xfd}, {.addr=0x8ea4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8ea5, .a=0x33, .x=0xe2, .y=0x91, .sp=0x18, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0xfd}, {.addr=0x8ea4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8ea4, .value=0x66, .type=IO_READ},
        {.addr=0x8ea5, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_032F) {
    const struct CPU_State initial_cpu = {.pc=0x2ac7, .a=0xe2, .x=0xd6, .y=0x26, .sp=0x78, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x93}, {.addr=0x2ac7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2ac8, .a=0xe2, .x=0xd6, .y=0x26, .sp=0x78, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x93}, {.addr=0x2ac7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2ac7, .value=0x66, .type=IO_READ},
        {.addr=0x2ac8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0330) {
    const struct CPU_State initial_cpu = {.pc=0x5486, .a=0x57, .x=0xdc, .y=0x04, .sp=0x83, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0x73}, {.addr=0x5486, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5487, .a=0x57, .x=0xdc, .y=0x04, .sp=0x83, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0x73}, {.addr=0x5486, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5486, .value=0x66, .type=IO_READ},
        {.addr=0x5487, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0331) {
    const struct CPU_State initial_cpu = {.pc=0xf19a, .a=0xdc, .x=0xe8, .y=0x4c, .sp=0x04, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x00e8, .value=0xc8}, {.addr=0xf19a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf19b, .a=0xdc, .x=0xe8, .y=0x4c, .sp=0x04, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00e8, .value=0xc8}, {.addr=0xf19a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf19a, .value=0x66, .type=IO_READ},
        {.addr=0xf19b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e8, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0332) {
    const struct CPU_State initial_cpu = {.pc=0xe2b4, .a=0x2c, .x=0x3b, .y=0xa5, .sp=0x97, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x7a}, {.addr=0xe2b4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe2b5, .a=0x2c, .x=0x3b, .y=0xa5, .sp=0x97, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x7a}, {.addr=0xe2b4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe2b4, .value=0x66, .type=IO_READ},
        {.addr=0xe2b5, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0333) {
    const struct CPU_State initial_cpu = {.pc=0x46a4, .a=0xc8, .x=0x64, .y=0x3d, .sp=0x4a, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x27}, {.addr=0x46a4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x46a5, .a=0xc8, .x=0x64, .y=0x3d, .sp=0x4a, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x27}, {.addr=0x46a4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x46a4, .value=0x66, .type=IO_READ},
        {.addr=0x46a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0334) {
    const struct CPU_State initial_cpu = {.pc=0xed88, .a=0xa7, .x=0x21, .y=0x8f, .sp=0x23, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xa5}, {.addr=0xed88, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xed89, .a=0xa7, .x=0x21, .y=0x8f, .sp=0x23, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xa5}, {.addr=0xed88, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xed88, .value=0x66, .type=IO_READ},
        {.addr=0xed89, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0335) {
    const struct CPU_State initial_cpu = {.pc=0xac43, .a=0xe6, .x=0x84, .y=0xdd, .sp=0x5f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x0084, .value=0x11}, {.addr=0xac43, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xac44, .a=0xe6, .x=0x84, .y=0xdd, .sp=0x5f, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x0084, .value=0x11}, {.addr=0xac43, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xac43, .value=0x66, .type=IO_READ},
        {.addr=0xac44, .value=DUMMY, .type=IO_READ},
        {.addr=0x0084, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0336) {
    const struct CPU_State initial_cpu = {.pc=0x5a04, .a=0x1f, .x=0x3f, .y=0xdb, .sp=0xec, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xaa}, {.addr=0x5a04, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5a05, .a=0x1f, .x=0x3f, .y=0xdb, .sp=0xec, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xaa}, {.addr=0x5a04, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5a04, .value=0x66, .type=IO_READ},
        {.addr=0x5a05, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0337) {
    const struct CPU_State initial_cpu = {.pc=0xf52d, .a=0x17, .x=0xd9, .y=0xff, .sp=0xde, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x00d9, .value=0x61}, {.addr=0xf52d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf52e, .a=0x17, .x=0xd9, .y=0xff, .sp=0xde, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x00d9, .value=0x61}, {.addr=0xf52d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf52d, .value=0x66, .type=IO_READ},
        {.addr=0xf52e, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d9, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0338) {
    const struct CPU_State initial_cpu = {.pc=0x13a1, .a=0x9f, .x=0x86, .y=0xcf, .sp=0xf4, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0086, .value=0xe7}, {.addr=0x13a1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x13a2, .a=0x9f, .x=0x86, .y=0xcf, .sp=0xf4, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0086, .value=0xe7}, {.addr=0x13a1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x13a1, .value=0x66, .type=IO_READ},
        {.addr=0x13a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0086, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0339) {
    const struct CPU_State initial_cpu = {.pc=0x7c47, .a=0x17, .x=0x06, .y=0x9a, .sp=0x9d, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0006, .value=0xf0}, {.addr=0x7c47, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7c48, .a=0x17, .x=0x06, .y=0x9a, .sp=0x9d, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0006, .value=0xf0}, {.addr=0x7c47, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7c47, .value=0x66, .type=IO_READ},
        {.addr=0x7c48, .value=DUMMY, .type=IO_READ},
        {.addr=0x0006, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_033A) {
    const struct CPU_State initial_cpu = {.pc=0x9870, .a=0x75, .x=0x69, .y=0xe0, .sp=0xd0, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0xaa}, {.addr=0x9870, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9871, .a=0x75, .x=0x69, .y=0xe0, .sp=0xd0, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0xaa}, {.addr=0x9870, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9870, .value=0x66, .type=IO_READ},
        {.addr=0x9871, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_033B) {
    const struct CPU_State initial_cpu = {.pc=0xd76e, .a=0x4b, .x=0x18, .y=0xac, .sp=0x0d, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0018, .value=0x43}, {.addr=0xd76e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd76f, .a=0x4b, .x=0x18, .y=0xac, .sp=0x0d, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0018, .value=0x43}, {.addr=0xd76e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd76e, .value=0x66, .type=IO_READ},
        {.addr=0xd76f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0018, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_033C) {
    const struct CPU_State initial_cpu = {.pc=0x5f74, .a=0xb2, .x=0x34, .y=0x84, .sp=0x72, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0xca}, {.addr=0x5f74, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5f75, .a=0xb2, .x=0x34, .y=0x84, .sp=0x72, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xca}, {.addr=0x5f74, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5f74, .value=0x66, .type=IO_READ},
        {.addr=0x5f75, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_033D) {
    const struct CPU_State initial_cpu = {.pc=0xb8c5, .a=0x9c, .x=0x0d, .y=0x77, .sp=0x0d, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x000d, .value=0x64}, {.addr=0xb8c5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb8c6, .a=0x9c, .x=0x0d, .y=0x77, .sp=0x0d, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x000d, .value=0x64}, {.addr=0xb8c5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb8c5, .value=0x66, .type=IO_READ},
        {.addr=0xb8c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x000d, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc737, .a=0x6b, .x=0xd2, .y=0x4f, .sp=0xe9, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x26}, {.addr=0xc737, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc738, .a=0x6b, .x=0xd2, .y=0x4f, .sp=0xe9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x26}, {.addr=0xc737, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc737, .value=0x66, .type=IO_READ},
        {.addr=0xc738, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_033F) {
    const struct CPU_State initial_cpu = {.pc=0x0d62, .a=0xd7, .x=0xc6, .y=0x14, .sp=0x6b, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0x9e}, {.addr=0x0d62, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0d63, .a=0xd7, .x=0xc6, .y=0x14, .sp=0x6b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0x9e}, {.addr=0x0d62, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0d62, .value=0x66, .type=IO_READ},
        {.addr=0x0d63, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0340) {
    const struct CPU_State initial_cpu = {.pc=0xc385, .a=0x6b, .x=0x23, .y=0xb1, .sp=0x72, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0x21}, {.addr=0xc385, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc386, .a=0x6b, .x=0x23, .y=0xb1, .sp=0x72, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0x21}, {.addr=0xc385, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc385, .value=0x66, .type=IO_READ},
        {.addr=0xc386, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0341) {
    const struct CPU_State initial_cpu = {.pc=0x1cc5, .a=0xe9, .x=0x65, .y=0x44, .sp=0xb9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x1d}, {.addr=0x1cc5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1cc6, .a=0xe9, .x=0x65, .y=0x44, .sp=0xb9, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x1d}, {.addr=0x1cc5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1cc5, .value=0x66, .type=IO_READ},
        {.addr=0x1cc6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0342) {
    const struct CPU_State initial_cpu = {.pc=0x1420, .a=0xf0, .x=0x21, .y=0xbe, .sp=0x1e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0021, .value=0x65}, {.addr=0x1420, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1421, .a=0xf0, .x=0x21, .y=0xbe, .sp=0x1e, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0021, .value=0x65}, {.addr=0x1420, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1420, .value=0x66, .type=IO_READ},
        {.addr=0x1421, .value=DUMMY, .type=IO_READ},
        {.addr=0x0021, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0343) {
    const struct CPU_State initial_cpu = {.pc=0x3785, .a=0x5b, .x=0x87, .y=0x60, .sp=0xbe, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0087, .value=0xc8}, {.addr=0x3785, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3786, .a=0x5b, .x=0x87, .y=0x60, .sp=0xbe, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0087, .value=0xc8}, {.addr=0x3785, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3785, .value=0x66, .type=IO_READ},
        {.addr=0x3786, .value=DUMMY, .type=IO_READ},
        {.addr=0x0087, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0344) {
    const struct CPU_State initial_cpu = {.pc=0x2353, .a=0xd2, .x=0x36, .y=0xc0, .sp=0xd1, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x80}, {.addr=0x2353, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2354, .a=0xd2, .x=0x36, .y=0xc0, .sp=0xd1, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0x80}, {.addr=0x2353, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2353, .value=0x66, .type=IO_READ},
        {.addr=0x2354, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0345) {
    const struct CPU_State initial_cpu = {.pc=0xab4d, .a=0x50, .x=0x16, .y=0x73, .sp=0xf1, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x0016, .value=0xf3}, {.addr=0xab4d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xab4e, .a=0x50, .x=0x16, .y=0x73, .sp=0xf1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0016, .value=0xf3}, {.addr=0xab4d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xab4d, .value=0x66, .type=IO_READ},
        {.addr=0xab4e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0016, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0346) {
    const struct CPU_State initial_cpu = {.pc=0xec73, .a=0x2d, .x=0x33, .y=0x38, .sp=0x74, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0033, .value=0x8a}, {.addr=0xec73, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xec74, .a=0x2d, .x=0x33, .y=0x38, .sp=0x74, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0033, .value=0x8a}, {.addr=0xec73, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xec73, .value=0x66, .type=IO_READ},
        {.addr=0xec74, .value=DUMMY, .type=IO_READ},
        {.addr=0x0033, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0347) {
    const struct CPU_State initial_cpu = {.pc=0x92bc, .a=0x43, .x=0xce, .y=0x21, .sp=0xa9, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x00ce, .value=0x7b}, {.addr=0x92bc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x92bd, .a=0x43, .x=0xce, .y=0x21, .sp=0xa9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x00ce, .value=0x7b}, {.addr=0x92bc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x92bc, .value=0x66, .type=IO_READ},
        {.addr=0x92bd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ce, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0348) {
    const struct CPU_State initial_cpu = {.pc=0xc7a1, .a=0x20, .x=0x71, .y=0x31, .sp=0x4a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x89}, {.addr=0xc7a1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc7a2, .a=0x20, .x=0x71, .y=0x31, .sp=0x4a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x89}, {.addr=0xc7a1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc7a1, .value=0x66, .type=IO_READ},
        {.addr=0xc7a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0349) {
    const struct CPU_State initial_cpu = {.pc=0xa3e1, .a=0x68, .x=0x7e, .y=0x33, .sp=0x2e, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x007e, .value=0x83}, {.addr=0xa3e1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa3e2, .a=0x68, .x=0x7e, .y=0x33, .sp=0x2e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x007e, .value=0x83}, {.addr=0xa3e1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa3e1, .value=0x66, .type=IO_READ},
        {.addr=0xa3e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x007e, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_034A) {
    const struct CPU_State initial_cpu = {.pc=0x1904, .a=0xf0, .x=0x83, .y=0xd4, .sp=0xb3, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x59}, {.addr=0x1904, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1905, .a=0xf0, .x=0x83, .y=0xd4, .sp=0xb3, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x59}, {.addr=0x1904, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1904, .value=0x66, .type=IO_READ},
        {.addr=0x1905, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_034B) {
    const struct CPU_State initial_cpu = {.pc=0x57b8, .a=0xd3, .x=0x55, .y=0x45, .sp=0x87, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0xc2}, {.addr=0x57b8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x57b9, .a=0xd3, .x=0x55, .y=0x45, .sp=0x87, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0xc2}, {.addr=0x57b8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x57b8, .value=0x66, .type=IO_READ},
        {.addr=0x57b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_034C) {
    const struct CPU_State initial_cpu = {.pc=0x6f04, .a=0x15, .x=0xe2, .y=0x33, .sp=0x3f, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x00e2, .value=0x17}, {.addr=0x6f04, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6f05, .a=0x15, .x=0xe2, .y=0x33, .sp=0x3f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x00e2, .value=0x17}, {.addr=0x6f04, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6f04, .value=0x66, .type=IO_READ},
        {.addr=0x6f05, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e2, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_034D) {
    const struct CPU_State initial_cpu = {.pc=0x6c75, .a=0x20, .x=0x5b, .y=0xa8, .sp=0x17, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xa7}, {.addr=0x6c75, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6c76, .a=0x20, .x=0x5b, .y=0xa8, .sp=0x17, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xa7}, {.addr=0x6c75, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6c75, .value=0x66, .type=IO_READ},
        {.addr=0x6c76, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_034E) {
    const struct CPU_State initial_cpu = {.pc=0x076a, .a=0x3c, .x=0x31, .y=0xa3, .sp=0xcb, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0031, .value=0xba}, {.addr=0x076a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x076b, .a=0x3c, .x=0x31, .y=0xa3, .sp=0xcb, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0031, .value=0xba}, {.addr=0x076a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x076a, .value=0x66, .type=IO_READ},
        {.addr=0x076b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0031, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_034F) {
    const struct CPU_State initial_cpu = {.pc=0xa994, .a=0x9a, .x=0x3f, .y=0x0e, .sp=0x26, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x4a}, {.addr=0xa994, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa995, .a=0x9a, .x=0x3f, .y=0x0e, .sp=0x26, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x4a}, {.addr=0xa994, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa994, .value=0x66, .type=IO_READ},
        {.addr=0xa995, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0350) {
    const struct CPU_State initial_cpu = {.pc=0x8264, .a=0x1d, .x=0x9f, .y=0x23, .sp=0x9c, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x009f, .value=0x71}, {.addr=0x8264, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8265, .a=0x1d, .x=0x9f, .y=0x23, .sp=0x9c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x009f, .value=0x71}, {.addr=0x8264, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8264, .value=0x66, .type=IO_READ},
        {.addr=0x8265, .value=DUMMY, .type=IO_READ},
        {.addr=0x009f, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0351) {
    const struct CPU_State initial_cpu = {.pc=0x25b2, .a=0x28, .x=0x77, .y=0x70, .sp=0x85, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0xcc}, {.addr=0x25b2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x25b3, .a=0x28, .x=0x77, .y=0x70, .sp=0x85, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0xcc}, {.addr=0x25b2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x25b2, .value=0x66, .type=IO_READ},
        {.addr=0x25b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0352) {
    const struct CPU_State initial_cpu = {.pc=0x2fdb, .a=0xfb, .x=0xe1, .y=0x34, .sp=0x65, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0xaa}, {.addr=0x2fdb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2fdc, .a=0xfb, .x=0xe1, .y=0x34, .sp=0x65, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xaa}, {.addr=0x2fdb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2fdb, .value=0x66, .type=IO_READ},
        {.addr=0x2fdc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0353) {
    const struct CPU_State initial_cpu = {.pc=0x2c11, .a=0xec, .x=0xde, .y=0xf4, .sp=0xb5, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x12}, {.addr=0x2c11, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2c12, .a=0xec, .x=0xde, .y=0xf4, .sp=0xb5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x12}, {.addr=0x2c11, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2c11, .value=0x66, .type=IO_READ},
        {.addr=0x2c12, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0355) {
    const struct CPU_State initial_cpu = {.pc=0xe264, .a=0xfa, .x=0xac, .y=0x21, .sp=0x63, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ac, .value=0x76}, {.addr=0xe264, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe265, .a=0xfa, .x=0xac, .y=0x21, .sp=0x63, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x00ac, .value=0x76}, {.addr=0xe264, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe264, .value=0x66, .type=IO_READ},
        {.addr=0xe265, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ac, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0356) {
    const struct CPU_State initial_cpu = {.pc=0x282a, .a=0x7d, .x=0xea, .y=0xc6, .sp=0x4e, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0xc2}, {.addr=0x282a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x282b, .a=0x7d, .x=0xea, .y=0xc6, .sp=0x4e, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0xc2}, {.addr=0x282a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x282a, .value=0x66, .type=IO_READ},
        {.addr=0x282b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0357) {
    const struct CPU_State initial_cpu = {.pc=0x7324, .a=0x13, .x=0x8b, .y=0x4d, .sp=0xa3, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x008b, .value=0x20}, {.addr=0x7324, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7325, .a=0x13, .x=0x8b, .y=0x4d, .sp=0xa3, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x008b, .value=0x20}, {.addr=0x7324, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7324, .value=0x66, .type=IO_READ},
        {.addr=0x7325, .value=DUMMY, .type=IO_READ},
        {.addr=0x008b, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0358) {
    const struct CPU_State initial_cpu = {.pc=0x8fb2, .a=0x49, .x=0x84, .y=0x8e, .sp=0x9a, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0xb6}, {.addr=0x8fb2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8fb3, .a=0x49, .x=0x84, .y=0x8e, .sp=0x9a, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xb6}, {.addr=0x8fb2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8fb2, .value=0x66, .type=IO_READ},
        {.addr=0x8fb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0359) {
    const struct CPU_State initial_cpu = {.pc=0x10d2, .a=0x80, .x=0xfc, .y=0x2c, .sp=0x21, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0xd0}, {.addr=0x10d2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x10d3, .a=0x80, .x=0xfc, .y=0x2c, .sp=0x21, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xd0}, {.addr=0x10d2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x10d2, .value=0x66, .type=IO_READ},
        {.addr=0x10d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_035A) {
    const struct CPU_State initial_cpu = {.pc=0x01bd, .a=0x19, .x=0xc3, .y=0xe7, .sp=0x3a, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x00c3, .value=0xd7}, {.addr=0x01bd, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x01be, .a=0x19, .x=0xc3, .y=0xe7, .sp=0x3a, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x00c3, .value=0xd7}, {.addr=0x01bd, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x01bd, .value=0x66, .type=IO_READ},
        {.addr=0x01be, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c3, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_035B) {
    const struct CPU_State initial_cpu = {.pc=0x0c18, .a=0x77, .x=0xb5, .y=0xc2, .sp=0xeb, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0xab}, {.addr=0x0c18, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0c19, .a=0x77, .x=0xb5, .y=0xc2, .sp=0xeb, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xab}, {.addr=0x0c18, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0c18, .value=0x66, .type=IO_READ},
        {.addr=0x0c19, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_035C) {
    const struct CPU_State initial_cpu = {.pc=0x1602, .a=0x6d, .x=0x25, .y=0x26, .sp=0x33, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0xda}, {.addr=0x1602, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1603, .a=0x6d, .x=0x25, .y=0x26, .sp=0x33, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0xda}, {.addr=0x1602, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1602, .value=0x66, .type=IO_READ},
        {.addr=0x1603, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_035D) {
    const struct CPU_State initial_cpu = {.pc=0x2d7b, .a=0xef, .x=0x0e, .y=0xdd, .sp=0xea, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x000e, .value=0x2f}, {.addr=0x2d7b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2d7c, .a=0xef, .x=0x0e, .y=0xdd, .sp=0xea, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x000e, .value=0x2f}, {.addr=0x2d7b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2d7b, .value=0x66, .type=IO_READ},
        {.addr=0x2d7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x000e, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_035E) {
    const struct CPU_State initial_cpu = {.pc=0xeda2, .a=0x6d, .x=0xc8, .y=0xfa, .sp=0x26, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x00c8, .value=0x75}, {.addr=0xeda2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xeda3, .a=0x6d, .x=0xc8, .y=0xfa, .sp=0x26, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x00c8, .value=0x75}, {.addr=0xeda2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xeda2, .value=0x66, .type=IO_READ},
        {.addr=0xeda3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c8, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_035F) {
    const struct CPU_State initial_cpu = {.pc=0xaf33, .a=0x0e, .x=0x81, .y=0x06, .sp=0xba, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0081, .value=0x2c}, {.addr=0xaf33, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xaf34, .a=0x0e, .x=0x81, .y=0x06, .sp=0xba, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0081, .value=0x2c}, {.addr=0xaf33, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xaf33, .value=0x66, .type=IO_READ},
        {.addr=0xaf34, .value=DUMMY, .type=IO_READ},
        {.addr=0x0081, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0360) {
    const struct CPU_State initial_cpu = {.pc=0xab6e, .a=0x07, .x=0xd6, .y=0x92, .sp=0x29, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x00d6, .value=0xa3}, {.addr=0xab6e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xab6f, .a=0x07, .x=0xd6, .y=0x92, .sp=0x29, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x00d6, .value=0xa3}, {.addr=0xab6e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xab6e, .value=0x66, .type=IO_READ},
        {.addr=0xab6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d6, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0361) {
    const struct CPU_State initial_cpu = {.pc=0x92f1, .a=0x0a, .x=0x22, .y=0x68, .sp=0x03, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0xfe}, {.addr=0x92f1, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x92f2, .a=0x0a, .x=0x22, .y=0x68, .sp=0x03, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xfe}, {.addr=0x92f1, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x92f1, .value=0x66, .type=IO_READ},
        {.addr=0x92f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0362) {
    const struct CPU_State initial_cpu = {.pc=0xceb5, .a=0x95, .x=0xf1, .y=0x34, .sp=0x82, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x8d}, {.addr=0xceb5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xceb6, .a=0x95, .x=0xf1, .y=0x34, .sp=0x82, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x8d}, {.addr=0xceb5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xceb5, .value=0x66, .type=IO_READ},
        {.addr=0xceb6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0363) {
    const struct CPU_State initial_cpu = {.pc=0x9393, .a=0x86, .x=0xdc, .y=0x74, .sp=0xb3, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x4c}, {.addr=0x9393, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9394, .a=0x86, .x=0xdc, .y=0x74, .sp=0xb3, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x4c}, {.addr=0x9393, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9393, .value=0x66, .type=IO_READ},
        {.addr=0x9394, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0364) {
    const struct CPU_State initial_cpu = {.pc=0xc1f0, .a=0x22, .x=0x8d, .y=0xac, .sp=0x2b, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x33}, {.addr=0xc1f0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc1f1, .a=0x22, .x=0x8d, .y=0xac, .sp=0x2b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x33}, {.addr=0xc1f0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc1f0, .value=0x66, .type=IO_READ},
        {.addr=0xc1f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0365) {
    const struct CPU_State initial_cpu = {.pc=0x87a0, .a=0x00, .x=0x00, .y=0x29, .sp=0xd6, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x93}, {.addr=0x87a0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x87a1, .a=0x00, .x=0x00, .y=0x29, .sp=0xd6, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x93}, {.addr=0x87a0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x87a0, .value=0x66, .type=IO_READ},
        {.addr=0x87a1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0366) {
    const struct CPU_State initial_cpu = {.pc=0xc4e3, .a=0xd0, .x=0x2b, .y=0xf0, .sp=0x33, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x002b, .value=0xaa}, {.addr=0xc4e3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc4e4, .a=0xd0, .x=0x2b, .y=0xf0, .sp=0x33, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x002b, .value=0xaa}, {.addr=0xc4e3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc4e3, .value=0x66, .type=IO_READ},
        {.addr=0xc4e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x002b, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0367) {
    const struct CPU_State initial_cpu = {.pc=0x9f70, .a=0xfe, .x=0x4d, .y=0x68, .sp=0x5e, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x004d, .value=0x99}, {.addr=0x9f70, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9f71, .a=0xfe, .x=0x4d, .y=0x68, .sp=0x5e, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x004d, .value=0x99}, {.addr=0x9f70, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9f70, .value=0x66, .type=IO_READ},
        {.addr=0x9f71, .value=DUMMY, .type=IO_READ},
        {.addr=0x004d, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0368) {
    const struct CPU_State initial_cpu = {.pc=0x2017, .a=0x0d, .x=0x09, .y=0x11, .sp=0x5b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0009, .value=0xcc}, {.addr=0x2017, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2018, .a=0x0d, .x=0x09, .y=0x11, .sp=0x5b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0009, .value=0xcc}, {.addr=0x2017, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2017, .value=0x66, .type=IO_READ},
        {.addr=0x2018, .value=DUMMY, .type=IO_READ},
        {.addr=0x0009, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0369) {
    const struct CPU_State initial_cpu = {.pc=0x6c85, .a=0x97, .x=0x1b, .y=0xaa, .sp=0xcc, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x3f}, {.addr=0x6c85, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6c86, .a=0x97, .x=0x1b, .y=0xaa, .sp=0xcc, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x3f}, {.addr=0x6c85, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6c85, .value=0x66, .type=IO_READ},
        {.addr=0x6c86, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_036A) {
    const struct CPU_State initial_cpu = {.pc=0x7b67, .a=0xeb, .x=0xda, .y=0xbb, .sp=0xb6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0xc5}, {.addr=0x7b67, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7b68, .a=0xeb, .x=0xda, .y=0xbb, .sp=0xb6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0xc5}, {.addr=0x7b67, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7b67, .value=0x66, .type=IO_READ},
        {.addr=0x7b68, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_036B) {
    const struct CPU_State initial_cpu = {.pc=0x74bf, .a=0x7b, .x=0x89, .y=0xe7, .sp=0x17, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x35}, {.addr=0x74bf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x74c0, .a=0x7b, .x=0x89, .y=0xe7, .sp=0x17, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x35}, {.addr=0x74bf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x74bf, .value=0x66, .type=IO_READ},
        {.addr=0x74c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_036C) {
    const struct CPU_State initial_cpu = {.pc=0xa9e5, .a=0xf4, .x=0x88, .y=0x9b, .sp=0x4f, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x44}, {.addr=0xa9e5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa9e6, .a=0xf4, .x=0x88, .y=0x9b, .sp=0x4f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x44}, {.addr=0xa9e5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa9e5, .value=0x66, .type=IO_READ},
        {.addr=0xa9e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_036D) {
    const struct CPU_State initial_cpu = {.pc=0x23a8, .a=0x27, .x=0x27, .y=0x81, .sp=0x6a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x3a}, {.addr=0x23a8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x23a9, .a=0x27, .x=0x27, .y=0x81, .sp=0x6a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x3a}, {.addr=0x23a8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x23a8, .value=0x66, .type=IO_READ},
        {.addr=0x23a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_036E) {
    const struct CPU_State initial_cpu = {.pc=0xc03d, .a=0xc0, .x=0x4c, .y=0xcd, .sp=0xe9, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x25}, {.addr=0xc03d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc03e, .a=0xc0, .x=0x4c, .y=0xcd, .sp=0xe9, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x25}, {.addr=0xc03d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc03d, .value=0x66, .type=IO_READ},
        {.addr=0xc03e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_036F) {
    const struct CPU_State initial_cpu = {.pc=0xec52, .a=0x82, .x=0x9d, .y=0x57, .sp=0xbb, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xdd}, {.addr=0xec52, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xec53, .a=0x82, .x=0x9d, .y=0x57, .sp=0xbb, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xdd}, {.addr=0xec52, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xec52, .value=0x66, .type=IO_READ},
        {.addr=0xec53, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0370) {
    const struct CPU_State initial_cpu = {.pc=0x17c5, .a=0xa0, .x=0x21, .y=0xe5, .sp=0x08, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xb7}, {.addr=0x17c5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x17c6, .a=0xa0, .x=0x21, .y=0xe5, .sp=0x08, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xb7}, {.addr=0x17c5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x17c5, .value=0x66, .type=IO_READ},
        {.addr=0x17c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0371) {
    const struct CPU_State initial_cpu = {.pc=0xed7a, .a=0x88, .x=0x02, .y=0xe5, .sp=0x22, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x88}, {.addr=0xed7a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xed7b, .a=0x88, .x=0x02, .y=0xe5, .sp=0x22, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x88}, {.addr=0xed7a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xed7a, .value=0x66, .type=IO_READ},
        {.addr=0xed7b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0372) {
    const struct CPU_State initial_cpu = {.pc=0x7e7b, .a=0x39, .x=0xca, .y=0x39, .sp=0x5c, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x00ca, .value=0xa8}, {.addr=0x7e7b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7e7c, .a=0x39, .x=0xca, .y=0x39, .sp=0x5c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00ca, .value=0xa8}, {.addr=0x7e7b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7e7b, .value=0x66, .type=IO_READ},
        {.addr=0x7e7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ca, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0373) {
    const struct CPU_State initial_cpu = {.pc=0x1eb0, .a=0xd9, .x=0x6b, .y=0xda, .sp=0xa6, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0xf1}, {.addr=0x1eb0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1eb1, .a=0xd9, .x=0x6b, .y=0xda, .sp=0xa6, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0xf1}, {.addr=0x1eb0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1eb0, .value=0x66, .type=IO_READ},
        {.addr=0x1eb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0374) {
    const struct CPU_State initial_cpu = {.pc=0x978c, .a=0xd8, .x=0xc1, .y=0x41, .sp=0x3a, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0xc2}, {.addr=0x978c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x978d, .a=0xd8, .x=0xc1, .y=0x41, .sp=0x3a, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0xc2}, {.addr=0x978c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x978c, .value=0x66, .type=IO_READ},
        {.addr=0x978d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0375) {
    const struct CPU_State initial_cpu = {.pc=0x8a55, .a=0x48, .x=0xed, .y=0x11, .sp=0x1f, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x00ed, .value=0xb9}, {.addr=0x8a55, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8a56, .a=0x48, .x=0xed, .y=0x11, .sp=0x1f, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ed, .value=0xb9}, {.addr=0x8a55, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8a55, .value=0x66, .type=IO_READ},
        {.addr=0x8a56, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ed, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0376) {
    const struct CPU_State initial_cpu = {.pc=0x79dc, .a=0x53, .x=0xe1, .y=0x39, .sp=0xca, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x00e1, .value=0x00}, {.addr=0x79dc, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x79dd, .a=0x53, .x=0xe1, .y=0x39, .sp=0xca, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00e1, .value=0x00}, {.addr=0x79dc, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x79dc, .value=0x66, .type=IO_READ},
        {.addr=0x79dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x00e1, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0377) {
    const struct CPU_State initial_cpu = {.pc=0xa192, .a=0xa4, .x=0x19, .y=0x6b, .sp=0x94, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0019, .value=0xf6}, {.addr=0xa192, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa193, .a=0xa4, .x=0x19, .y=0x6b, .sp=0x94, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0019, .value=0xf6}, {.addr=0xa192, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa192, .value=0x66, .type=IO_READ},
        {.addr=0xa193, .value=DUMMY, .type=IO_READ},
        {.addr=0x0019, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0378) {
    const struct CPU_State initial_cpu = {.pc=0x6018, .a=0x37, .x=0x4e, .y=0xbd, .sp=0x3d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x09}, {.addr=0x6018, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6019, .a=0x37, .x=0x4e, .y=0xbd, .sp=0x3d, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x09}, {.addr=0x6018, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6018, .value=0x66, .type=IO_READ},
        {.addr=0x6019, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0379) {
    const struct CPU_State initial_cpu = {.pc=0x8542, .a=0x53, .x=0x73, .y=0x8c, .sp=0xf1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0073, .value=0x32}, {.addr=0x8542, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8543, .a=0x53, .x=0x73, .y=0x8c, .sp=0xf1, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0073, .value=0x32}, {.addr=0x8542, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8542, .value=0x66, .type=IO_READ},
        {.addr=0x8543, .value=DUMMY, .type=IO_READ},
        {.addr=0x0073, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_037A) {
    const struct CPU_State initial_cpu = {.pc=0x366b, .a=0x48, .x=0x58, .y=0x00, .sp=0xd1, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x66}, {.addr=0x366b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x366c, .a=0x48, .x=0x58, .y=0x00, .sp=0xd1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x66}, {.addr=0x366b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x366b, .value=0x66, .type=IO_READ},
        {.addr=0x366c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_037B) {
    const struct CPU_State initial_cpu = {.pc=0x53f9, .a=0x5e, .x=0xcc, .y=0x4a, .sp=0xfa, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x24}, {.addr=0x53f9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x53fa, .a=0x5e, .x=0xcc, .y=0x4a, .sp=0xfa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0x24}, {.addr=0x53f9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x53f9, .value=0x66, .type=IO_READ},
        {.addr=0x53fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_037C) {
    const struct CPU_State initial_cpu = {.pc=0x9296, .a=0xa2, .x=0x99, .y=0xca, .sp=0x7a, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0099, .value=0xf8}, {.addr=0x9296, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9297, .a=0xa2, .x=0x99, .y=0xca, .sp=0x7a, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0099, .value=0xf8}, {.addr=0x9296, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9296, .value=0x66, .type=IO_READ},
        {.addr=0x9297, .value=DUMMY, .type=IO_READ},
        {.addr=0x0099, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_037D) {
    const struct CPU_State initial_cpu = {.pc=0x73d2, .a=0xa3, .x=0x90, .y=0x09, .sp=0xc1, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0090, .value=0x7d}, {.addr=0x73d2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x73d3, .a=0xa3, .x=0x90, .y=0x09, .sp=0xc1, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0090, .value=0x7d}, {.addr=0x73d2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x73d2, .value=0x66, .type=IO_READ},
        {.addr=0x73d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0090, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_037E) {
    const struct CPU_State initial_cpu = {.pc=0xb4d4, .a=0x72, .x=0x27, .y=0xd9, .sp=0x23, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x80}, {.addr=0xb4d4, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb4d5, .a=0x72, .x=0x27, .y=0xd9, .sp=0x23, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x80}, {.addr=0xb4d4, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb4d4, .value=0x66, .type=IO_READ},
        {.addr=0xb4d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_037F) {
    const struct CPU_State initial_cpu = {.pc=0x7537, .a=0x7c, .x=0xb0, .y=0xcf, .sp=0xab, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0xbd}, {.addr=0x7537, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7538, .a=0x7c, .x=0xb0, .y=0xcf, .sp=0xab, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0xbd}, {.addr=0x7537, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7537, .value=0x66, .type=IO_READ},
        {.addr=0x7538, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0380) {
    const struct CPU_State initial_cpu = {.pc=0x32b0, .a=0xb0, .x=0x96, .y=0x7d, .sp=0x1e, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0xf2}, {.addr=0x32b0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x32b1, .a=0xb0, .x=0x96, .y=0x7d, .sp=0x1e, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xf2}, {.addr=0x32b0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x32b0, .value=0x66, .type=IO_READ},
        {.addr=0x32b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0381) {
    const struct CPU_State initial_cpu = {.pc=0x9ad5, .a=0x05, .x=0x23, .y=0xca, .sp=0xfb, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x0023, .value=0xc5}, {.addr=0x9ad5, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9ad6, .a=0x05, .x=0x23, .y=0xca, .sp=0xfb, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x0023, .value=0xc5}, {.addr=0x9ad5, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9ad5, .value=0x66, .type=IO_READ},
        {.addr=0x9ad6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0023, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0382) {
    const struct CPU_State initial_cpu = {.pc=0x769e, .a=0x78, .x=0x81, .y=0x76, .sp=0x84, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0xf9}, {.addr=0x769e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x769f, .a=0x78, .x=0x81, .y=0x76, .sp=0x84, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0xf9}, {.addr=0x769e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x769e, .value=0x66, .type=IO_READ},
        {.addr=0x769f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0383) {
    const struct CPU_State initial_cpu = {.pc=0x255a, .a=0xaf, .x=0xfc, .y=0xa4, .sp=0x9b, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x23}, {.addr=0x255a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x255b, .a=0xaf, .x=0xfc, .y=0xa4, .sp=0x9b, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x23}, {.addr=0x255a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x255a, .value=0x66, .type=IO_READ},
        {.addr=0x255b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0384) {
    const struct CPU_State initial_cpu = {.pc=0x2eee, .a=0xd0, .x=0x59, .y=0x63, .sp=0xbc, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0059, .value=0x0c}, {.addr=0x2eee, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2eef, .a=0xd0, .x=0x59, .y=0x63, .sp=0xbc, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x0059, .value=0x0c}, {.addr=0x2eee, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2eee, .value=0x66, .type=IO_READ},
        {.addr=0x2eef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0059, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0385) {
    const struct CPU_State initial_cpu = {.pc=0x4ded, .a=0x5c, .x=0xb0, .y=0x49, .sp=0xee, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00b0, .value=0x89}, {.addr=0x4ded, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4dee, .a=0x5c, .x=0xb0, .y=0x49, .sp=0xee, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x00b0, .value=0x89}, {.addr=0x4ded, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4ded, .value=0x66, .type=IO_READ},
        {.addr=0x4dee, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b0, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0386) {
    const struct CPU_State initial_cpu = {.pc=0xf79b, .a=0x4b, .x=0x75, .y=0xf0, .sp=0xb0, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0075, .value=0xb2}, {.addr=0xf79b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf79c, .a=0x4b, .x=0x75, .y=0xf0, .sp=0xb0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0075, .value=0xb2}, {.addr=0xf79b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf79b, .value=0x66, .type=IO_READ},
        {.addr=0xf79c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0075, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0387) {
    const struct CPU_State initial_cpu = {.pc=0x1869, .a=0xdb, .x=0x3f, .y=0xad, .sp=0xdb, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0x73}, {.addr=0x1869, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x186a, .a=0xdb, .x=0x3f, .y=0xad, .sp=0xdb, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0x73}, {.addr=0x1869, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1869, .value=0x66, .type=IO_READ},
        {.addr=0x186a, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0388) {
    const struct CPU_State initial_cpu = {.pc=0xc19c, .a=0x3a, .x=0x8b, .y=0x3b, .sp=0x89, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x04}, {.addr=0xc19c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc19d, .a=0x3a, .x=0x8b, .y=0x3b, .sp=0x89, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x04}, {.addr=0xc19c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc19c, .value=0x66, .type=IO_READ},
        {.addr=0xc19d, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0389) {
    const struct CPU_State initial_cpu = {.pc=0x42ca, .a=0xe7, .x=0x27, .y=0x03, .sp=0x2d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0027, .value=0x80}, {.addr=0x42ca, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x42cb, .a=0xe7, .x=0x27, .y=0x03, .sp=0x2d, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0027, .value=0x80}, {.addr=0x42ca, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x42ca, .value=0x66, .type=IO_READ},
        {.addr=0x42cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0027, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_038A) {
    const struct CPU_State initial_cpu = {.pc=0x1355, .a=0xa0, .x=0xec, .y=0xc2, .sp=0x07, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x00ec, .value=0xe9}, {.addr=0x1355, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1356, .a=0xa0, .x=0xec, .y=0xc2, .sp=0x07, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x00ec, .value=0xe9}, {.addr=0x1355, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1355, .value=0x66, .type=IO_READ},
        {.addr=0x1356, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ec, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_038B) {
    const struct CPU_State initial_cpu = {.pc=0xd7bb, .a=0x51, .x=0xb8, .y=0x6f, .sp=0x42, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x00b8, .value=0x3a}, {.addr=0xd7bb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xd7bc, .a=0x51, .x=0xb8, .y=0x6f, .sp=0x42, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x00b8, .value=0x3a}, {.addr=0xd7bb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xd7bb, .value=0x66, .type=IO_READ},
        {.addr=0xd7bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b8, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_038C) {
    const struct CPU_State initial_cpu = {.pc=0x354c, .a=0x07, .x=0x85, .y=0x00, .sp=0x3a, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0085, .value=0x8d}, {.addr=0x354c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x354d, .a=0x07, .x=0x85, .y=0x00, .sp=0x3a, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0085, .value=0x8d}, {.addr=0x354c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x354c, .value=0x66, .type=IO_READ},
        {.addr=0x354d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0085, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_038D) {
    const struct CPU_State initial_cpu = {.pc=0xb90e, .a=0xbd, .x=0xc8, .y=0xc4, .sp=0x77, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0xb8}, {.addr=0xb90e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb90f, .a=0xbd, .x=0xc8, .y=0xc4, .sp=0x77, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0xb8}, {.addr=0xb90e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb90e, .value=0x66, .type=IO_READ},
        {.addr=0xb90f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_038E) {
    const struct CPU_State initial_cpu = {.pc=0xe85c, .a=0x31, .x=0x25, .y=0x89, .sp=0xdf, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x0025, .value=0x94}, {.addr=0xe85c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe85d, .a=0x31, .x=0x25, .y=0x89, .sp=0xdf, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0025, .value=0x94}, {.addr=0xe85c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe85c, .value=0x66, .type=IO_READ},
        {.addr=0xe85d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0025, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_038F) {
    const struct CPU_State initial_cpu = {.pc=0x9c81, .a=0xa6, .x=0xd7, .y=0x34, .sp=0xe0, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x6a}, {.addr=0x9c81, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9c82, .a=0xa6, .x=0xd7, .y=0x34, .sp=0xe0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x6a}, {.addr=0x9c81, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9c81, .value=0x66, .type=IO_READ},
        {.addr=0x9c82, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0390) {
    const struct CPU_State initial_cpu = {.pc=0x34f8, .a=0x57, .x=0x95, .y=0x96, .sp=0x60, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0095, .value=0x57}, {.addr=0x34f8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x34f9, .a=0x57, .x=0x95, .y=0x96, .sp=0x60, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0095, .value=0x57}, {.addr=0x34f8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x34f8, .value=0x66, .type=IO_READ},
        {.addr=0x34f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0095, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0391) {
    const struct CPU_State initial_cpu = {.pc=0xbced, .a=0x82, .x=0x17, .y=0xb7, .sp=0xb2, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x1f}, {.addr=0xbced, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbcee, .a=0x82, .x=0x17, .y=0xb7, .sp=0xb2, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x1f}, {.addr=0xbced, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbced, .value=0x66, .type=IO_READ},
        {.addr=0xbcee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0392) {
    const struct CPU_State initial_cpu = {.pc=0x9b0f, .a=0xd9, .x=0x55, .y=0x6b, .sp=0x22, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x6c}, {.addr=0x9b0f, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9b10, .a=0xd9, .x=0x55, .y=0x6b, .sp=0x22, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x6c}, {.addr=0x9b0f, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9b0f, .value=0x66, .type=IO_READ},
        {.addr=0x9b10, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0393) {
    const struct CPU_State initial_cpu = {.pc=0x2f53, .a=0x24, .x=0x76, .y=0x13, .sp=0xb8, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x0076, .value=0xdf}, {.addr=0x2f53, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2f54, .a=0x24, .x=0x76, .y=0x13, .sp=0xb8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0076, .value=0xdf}, {.addr=0x2f53, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2f53, .value=0x66, .type=IO_READ},
        {.addr=0x2f54, .value=DUMMY, .type=IO_READ},
        {.addr=0x0076, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0395) {
    const struct CPU_State initial_cpu = {.pc=0x6e49, .a=0x8f, .x=0x8a, .y=0x50, .sp=0x66, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0xb1}, {.addr=0x6e49, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6e4a, .a=0x8f, .x=0x8a, .y=0x50, .sp=0x66, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0xb1}, {.addr=0x6e49, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6e49, .value=0x66, .type=IO_READ},
        {.addr=0x6e4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x008a, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0396) {
    const struct CPU_State initial_cpu = {.pc=0x4ab8, .a=0x66, .x=0xab, .y=0xf1, .sp=0x7f, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x00ab, .value=0x10}, {.addr=0x4ab8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4ab9, .a=0x66, .x=0xab, .y=0xf1, .sp=0x7f, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x00ab, .value=0x10}, {.addr=0x4ab8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4ab8, .value=0x66, .type=IO_READ},
        {.addr=0x4ab9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ab, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0397) {
    const struct CPU_State initial_cpu = {.pc=0x6c12, .a=0x1f, .x=0x34, .y=0x2f, .sp=0x81, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x44}, {.addr=0x6c12, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6c13, .a=0x1f, .x=0x34, .y=0x2f, .sp=0x81, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x44}, {.addr=0x6c12, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6c12, .value=0x66, .type=IO_READ},
        {.addr=0x6c13, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0398) {
    const struct CPU_State initial_cpu = {.pc=0xfee6, .a=0x97, .x=0xb2, .y=0x25, .sp=0x7f, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x14}, {.addr=0xfee6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfee7, .a=0x97, .x=0xb2, .y=0x25, .sp=0x7f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x14}, {.addr=0xfee6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfee6, .value=0x66, .type=IO_READ},
        {.addr=0xfee7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_0399) {
    const struct CPU_State initial_cpu = {.pc=0xc86c, .a=0x0d, .x=0xa2, .y=0x31, .sp=0xc6, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0xd9}, {.addr=0xc86c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc86d, .a=0x0d, .x=0xa2, .y=0x31, .sp=0xc6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xd9}, {.addr=0xc86c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc86c, .value=0x66, .type=IO_READ},
        {.addr=0xc86d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_039B) {
    const struct CPU_State initial_cpu = {.pc=0x8bd3, .a=0xca, .x=0x5e, .y=0x7e, .sp=0xf5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0xc9}, {.addr=0x8bd3, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8bd4, .a=0xca, .x=0x5e, .y=0x7e, .sp=0xf5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xc9}, {.addr=0x8bd3, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8bd3, .value=0x66, .type=IO_READ},
        {.addr=0x8bd4, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_039C) {
    const struct CPU_State initial_cpu = {.pc=0xc31a, .a=0xe8, .x=0xd1, .y=0x0d, .sp=0x15, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x9a}, {.addr=0xc31a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc31b, .a=0xe8, .x=0xd1, .y=0x0d, .sp=0x15, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x9a}, {.addr=0xc31a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc31a, .value=0x66, .type=IO_READ},
        {.addr=0xc31b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_039D) {
    const struct CPU_State initial_cpu = {.pc=0x73cf, .a=0x17, .x=0x98, .y=0x39, .sp=0xb6, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x11}, {.addr=0x73cf, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x73d0, .a=0x17, .x=0x98, .y=0x39, .sp=0xb6, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x11}, {.addr=0x73cf, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x73cf, .value=0x66, .type=IO_READ},
        {.addr=0x73d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_039E) {
    const struct CPU_State initial_cpu = {.pc=0xf1b9, .a=0x84, .x=0x3d, .y=0x7f, .sp=0x35, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x003d, .value=0x5d}, {.addr=0xf1b9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf1ba, .a=0x84, .x=0x3d, .y=0x7f, .sp=0x35, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x003d, .value=0x5d}, {.addr=0xf1b9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf1b9, .value=0x66, .type=IO_READ},
        {.addr=0xf1ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x003d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_039F) {
    const struct CPU_State initial_cpu = {.pc=0xe496, .a=0x34, .x=0x98, .y=0x6e, .sp=0x73, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0xb6}, {.addr=0xe496, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe497, .a=0x34, .x=0x98, .y=0x6e, .sp=0x73, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0xb6}, {.addr=0xe496, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe496, .value=0x66, .type=IO_READ},
        {.addr=0xe497, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x01f9, .a=0x39, .x=0xc9, .y=0xb4, .sp=0xad, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x9d}, {.addr=0x01f9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x01fa, .a=0x39, .x=0xc9, .y=0xb4, .sp=0xad, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x9d}, {.addr=0x01f9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x01f9, .value=0x66, .type=IO_READ},
        {.addr=0x01fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A1) {
    const struct CPU_State initial_cpu = {.pc=0xe9c0, .a=0x29, .x=0xcb, .y=0x3e, .sp=0x51, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01cb, .value=0xd9}, {.addr=0xe9c0, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe9c1, .a=0x29, .x=0xcb, .y=0x3e, .sp=0x51, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01cb, .value=0xd9}, {.addr=0xe9c0, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe9c0, .value=0x66, .type=IO_READ},
        {.addr=0xe9c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cb, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x1dc6, .a=0xef, .x=0x8e, .y=0xf2, .sp=0x3e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x008e, .value=0x1d}, {.addr=0x1dc6, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1dc7, .a=0xef, .x=0x8e, .y=0xf2, .sp=0x3e, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x008e, .value=0x1d}, {.addr=0x1dc6, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1dc6, .value=0x66, .type=IO_READ},
        {.addr=0x1dc7, .value=DUMMY, .type=IO_READ},
        {.addr=0x008e, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x5122, .a=0x93, .x=0x89, .y=0x2a, .sp=0xf2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0089, .value=0x2c}, {.addr=0x5122, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5123, .a=0x93, .x=0x89, .y=0x2a, .sp=0xf2, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0089, .value=0x2c}, {.addr=0x5122, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5122, .value=0x66, .type=IO_READ},
        {.addr=0x5123, .value=DUMMY, .type=IO_READ},
        {.addr=0x0089, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xb8d2, .a=0xcf, .x=0x20, .y=0x2b, .sp=0x48, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0020, .value=0xd2}, {.addr=0xb8d2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb8d3, .a=0xcf, .x=0x20, .y=0x2b, .sp=0x48, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0020, .value=0xd2}, {.addr=0xb8d2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb8d2, .value=0x66, .type=IO_READ},
        {.addr=0xb8d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0020, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xc19e, .a=0xb9, .x=0xab, .y=0x1f, .sp=0xde, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x9c}, {.addr=0xc19e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc19f, .a=0xb9, .x=0xab, .y=0x1f, .sp=0xde, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0x9c}, {.addr=0xc19e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc19e, .value=0x66, .type=IO_READ},
        {.addr=0xc19f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x9dca, .a=0x71, .x=0x6a, .y=0x65, .sp=0x42, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xd3}, {.addr=0x9dca, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9dcb, .a=0x71, .x=0x6a, .y=0x65, .sp=0x42, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xd3}, {.addr=0x9dca, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9dca, .value=0x66, .type=IO_READ},
        {.addr=0x9dcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x45c8, .a=0xee, .x=0x86, .y=0xf3, .sp=0x58, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x41}, {.addr=0x45c8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x45c9, .a=0xee, .x=0x86, .y=0xf3, .sp=0x58, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x41}, {.addr=0x45c8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x45c8, .value=0x66, .type=IO_READ},
        {.addr=0x45c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xeb3a, .a=0xb3, .x=0xc6, .y=0xc8, .sp=0xe6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x00c6, .value=0xfe}, {.addr=0xeb3a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xeb3b, .a=0xb3, .x=0xc6, .y=0xc8, .sp=0xe6, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x00c6, .value=0xfe}, {.addr=0xeb3a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xeb3a, .value=0x66, .type=IO_READ},
        {.addr=0xeb3b, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c6, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x3006, .a=0x2c, .x=0x36, .y=0xd3, .sp=0x57, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0036, .value=0x77}, {.addr=0x3006, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3007, .a=0x2c, .x=0x36, .y=0xd3, .sp=0x57, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0036, .value=0x77}, {.addr=0x3006, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3006, .value=0x66, .type=IO_READ},
        {.addr=0x3007, .value=DUMMY, .type=IO_READ},
        {.addr=0x0036, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x1beb, .a=0xb1, .x=0xf4, .y=0x64, .sp=0x2d, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x11}, {.addr=0x1beb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1bec, .a=0xb1, .x=0xf4, .y=0x64, .sp=0x2d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x11}, {.addr=0x1beb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1beb, .value=0x66, .type=IO_READ},
        {.addr=0x1bec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xafca, .a=0xbe, .x=0xbd, .y=0xa2, .sp=0x27, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x31}, {.addr=0xafca, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xafcb, .a=0xbe, .x=0xbd, .y=0xa2, .sp=0x27, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x31}, {.addr=0xafca, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xafca, .value=0x66, .type=IO_READ},
        {.addr=0xafcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x7a67, .a=0xd2, .x=0x56, .y=0x52, .sp=0x03, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0xb7}, {.addr=0x7a67, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7a68, .a=0xd2, .x=0x56, .y=0x52, .sp=0x03, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xb7}, {.addr=0x7a67, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7a67, .value=0x66, .type=IO_READ},
        {.addr=0x7a68, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x1cba, .a=0x18, .x=0x36, .y=0x0c, .sp=0x55, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0xde}, {.addr=0x1cba, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1cbb, .a=0x18, .x=0x36, .y=0x0c, .sp=0x55, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xde}, {.addr=0x1cba, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1cba, .value=0x66, .type=IO_READ},
        {.addr=0x1cbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x86db, .a=0xdb, .x=0xa2, .y=0xcb, .sp=0x8c, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x00a2, .value=0x78}, {.addr=0x86db, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x86dc, .a=0xdb, .x=0xa2, .y=0xcb, .sp=0x8c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x00a2, .value=0x78}, {.addr=0x86db, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x86db, .value=0x66, .type=IO_READ},
        {.addr=0x86dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x00a2, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xca4b, .a=0x7c, .x=0x2c, .y=0xda, .sp=0x4d, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0xd9}, {.addr=0xca4b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xca4c, .a=0x7c, .x=0x2c, .y=0xda, .sp=0x4d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xd9}, {.addr=0xca4b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xca4b, .value=0x66, .type=IO_READ},
        {.addr=0xca4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x2a96, .a=0x82, .x=0x55, .y=0x88, .sp=0x69, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x78}, {.addr=0x2a96, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x2a97, .a=0x82, .x=0x55, .y=0x88, .sp=0x69, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x78}, {.addr=0x2a96, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x2a96, .value=0x66, .type=IO_READ},
        {.addr=0x2a97, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x485c, .a=0x99, .x=0x66, .y=0x5d, .sp=0x67, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0066, .value=0xd6}, {.addr=0x485c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x485d, .a=0x99, .x=0x66, .y=0x5d, .sp=0x67, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0066, .value=0xd6}, {.addr=0x485c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x485c, .value=0x66, .type=IO_READ},
        {.addr=0x485d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0066, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x5927, .a=0xa8, .x=0xcd, .y=0xa7, .sp=0xf6, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x41}, {.addr=0x5927, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5928, .a=0xa8, .x=0xcd, .y=0xa7, .sp=0xf6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x41}, {.addr=0x5927, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5927, .value=0x66, .type=IO_READ},
        {.addr=0x5928, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xe66e, .a=0x3f, .x=0xc0, .y=0xf5, .sp=0x72, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x00c0, .value=0xfe}, {.addr=0xe66e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe66f, .a=0x3f, .x=0xc0, .y=0xf5, .sp=0x72, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x00c0, .value=0xfe}, {.addr=0xe66e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe66e, .value=0x66, .type=IO_READ},
        {.addr=0xe66f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00c0, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x515b, .a=0x84, .x=0x7f, .y=0x27, .sp=0xbb, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x007f, .value=0x39}, {.addr=0x515b, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x515c, .a=0x84, .x=0x7f, .y=0x27, .sp=0xbb, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x007f, .value=0x39}, {.addr=0x515b, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x515b, .value=0x66, .type=IO_READ},
        {.addr=0x515c, .value=DUMMY, .type=IO_READ},
        {.addr=0x007f, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x5b50, .a=0x76, .x=0x50, .y=0x5e, .sp=0x10, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0xb1}, {.addr=0x5b50, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5b51, .a=0x76, .x=0x50, .y=0x5e, .sp=0x10, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xb1}, {.addr=0x5b50, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5b50, .value=0x66, .type=IO_READ},
        {.addr=0x5b51, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xefce, .a=0xcd, .x=0x20, .y=0xb6, .sp=0xd9, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x57}, {.addr=0xefce, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xefcf, .a=0xcd, .x=0x20, .y=0xb6, .sp=0xd9, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x57}, {.addr=0xefce, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xefce, .value=0x66, .type=IO_READ},
        {.addr=0xefcf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x951a, .a=0x87, .x=0xce, .y=0xb1, .sp=0x4e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0xbc}, {.addr=0x951a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x951b, .a=0x87, .x=0xce, .y=0xb1, .sp=0x4e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0xbc}, {.addr=0x951a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x951a, .value=0x66, .type=IO_READ},
        {.addr=0x951b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x7694, .a=0x74, .x=0x88, .y=0x26, .sp=0xa0, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x65}, {.addr=0x7694, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x7695, .a=0x74, .x=0x88, .y=0x26, .sp=0xa0, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x65}, {.addr=0x7694, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x7694, .value=0x66, .type=IO_READ},
        {.addr=0x7695, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xa8d9, .a=0x71, .x=0x7c, .y=0x90, .sp=0x44, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x52}, {.addr=0xa8d9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa8da, .a=0x71, .x=0x7c, .y=0x90, .sp=0x44, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x52}, {.addr=0xa8d9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa8d9, .value=0x66, .type=IO_READ},
        {.addr=0xa8da, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x015e, .a=0x2e, .x=0x5b, .y=0x73, .sp=0x3e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x005b, .value=0xda}, {.addr=0x015e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x015f, .a=0x2e, .x=0x5b, .y=0x73, .sp=0x3e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x005b, .value=0xda}, {.addr=0x015e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x015e, .value=0x66, .type=IO_READ},
        {.addr=0x015f, .value=DUMMY, .type=IO_READ},
        {.addr=0x005b, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x862d, .a=0x32, .x=0x74, .y=0x43, .sp=0x7d, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x7c}, {.addr=0x862d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x862e, .a=0x32, .x=0x74, .y=0x43, .sp=0x7d, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x7c}, {.addr=0x862d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x862d, .value=0x66, .type=IO_READ},
        {.addr=0x862e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x8d62, .a=0x44, .x=0x9c, .y=0xfd, .sp=0xa9, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x009c, .value=0x13}, {.addr=0x8d62, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8d63, .a=0x44, .x=0x9c, .y=0xfd, .sp=0xa9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x009c, .value=0x13}, {.addr=0x8d62, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8d62, .value=0x66, .type=IO_READ},
        {.addr=0x8d63, .value=DUMMY, .type=IO_READ},
        {.addr=0x009c, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x176a, .a=0xbe, .x=0x7b, .y=0x7f, .sp=0x81, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x5c}, {.addr=0x176a, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x176b, .a=0xbe, .x=0x7b, .y=0x7f, .sp=0x81, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x5c}, {.addr=0x176a, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x176a, .value=0x66, .type=IO_READ},
        {.addr=0x176b, .value=DUMMY, .type=IO_READ},
        {.addr=0x007b, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xbb85, .a=0xfe, .x=0x49, .y=0x93, .sp=0xbd, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0049, .value=0x55}, {.addr=0xbb85, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbb86, .a=0xfe, .x=0x49, .y=0x93, .sp=0xbd, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0049, .value=0x55}, {.addr=0xbb85, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbb85, .value=0x66, .type=IO_READ},
        {.addr=0xbb86, .value=DUMMY, .type=IO_READ},
        {.addr=0x0049, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x52eb, .a=0xe0, .x=0x9d, .y=0x3e, .sp=0x0c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0xf6}, {.addr=0x52eb, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x52ec, .a=0xe0, .x=0x9d, .y=0x3e, .sp=0x0c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0xf6}, {.addr=0x52eb, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x52eb, .value=0x66, .type=IO_READ},
        {.addr=0x52ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x3512, .a=0x40, .x=0xb2, .y=0xab, .sp=0x79, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x8b}, {.addr=0x3512, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3513, .a=0x40, .x=0xb2, .y=0xab, .sp=0x79, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0x8b}, {.addr=0x3512, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3512, .value=0x66, .type=IO_READ},
        {.addr=0x3513, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xc241, .a=0x46, .x=0x7d, .y=0x37, .sp=0xc4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x007d, .value=0x4f}, {.addr=0xc241, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xc242, .a=0x46, .x=0x7d, .y=0x37, .sp=0xc4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x007d, .value=0x4f}, {.addr=0xc241, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xc241, .value=0x66, .type=IO_READ},
        {.addr=0xc242, .value=DUMMY, .type=IO_READ},
        {.addr=0x007d, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xf4ef, .a=0x11, .x=0xee, .y=0x9c, .sp=0xec, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0xa0}, {.addr=0xf4ef, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf4f0, .a=0x11, .x=0xee, .y=0x9c, .sp=0xec, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xa0}, {.addr=0xf4ef, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf4ef, .value=0x66, .type=IO_READ},
        {.addr=0xf4f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x082c, .a=0xb2, .x=0x73, .y=0x3e, .sp=0x83, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0xfa}, {.addr=0x082c, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x082d, .a=0xb2, .x=0x73, .y=0x3e, .sp=0x83, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xfa}, {.addr=0x082c, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x082c, .value=0x66, .type=IO_READ},
        {.addr=0x082d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xb4aa, .a=0x71, .x=0x2c, .y=0xdb, .sp=0x9c, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x04}, {.addr=0xb4aa, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb4ab, .a=0x71, .x=0x2c, .y=0xdb, .sp=0x9c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x04}, {.addr=0xb4aa, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb4aa, .value=0x66, .type=IO_READ},
        {.addr=0xb4ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x6962, .a=0x41, .x=0xab, .y=0x40, .sp=0x51, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0xbb}, {.addr=0x6962, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6963, .a=0x41, .x=0xab, .y=0x40, .sp=0x51, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xbb}, {.addr=0x6962, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6962, .value=0x66, .type=IO_READ},
        {.addr=0x6963, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x45a2, .a=0xb5, .x=0x83, .y=0xa7, .sp=0xca, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0083, .value=0xac}, {.addr=0x45a2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x45a3, .a=0xb5, .x=0x83, .y=0xa7, .sp=0xca, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0083, .value=0xac}, {.addr=0x45a2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x45a2, .value=0x66, .type=IO_READ},
        {.addr=0x45a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0083, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xcf3e, .a=0x9a, .x=0xf9, .y=0x2e, .sp=0x4c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x45}, {.addr=0xcf3e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcf3f, .a=0x9a, .x=0xf9, .y=0x2e, .sp=0x4c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x45}, {.addr=0xcf3e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcf3e, .value=0x66, .type=IO_READ},
        {.addr=0xcf3f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x1206, .a=0x60, .x=0x71, .y=0x7e, .sp=0x20, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0071, .value=0x54}, {.addr=0x1206, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1207, .a=0x60, .x=0x71, .y=0x7e, .sp=0x20, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0071, .value=0x54}, {.addr=0x1206, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1206, .value=0x66, .type=IO_READ},
        {.addr=0x1207, .value=DUMMY, .type=IO_READ},
        {.addr=0x0071, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x5124, .a=0xcc, .x=0x2d, .y=0x60, .sp=0x40, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x002d, .value=0xc1}, {.addr=0x5124, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x5125, .a=0xcc, .x=0x2d, .y=0x60, .sp=0x40, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x002d, .value=0xc1}, {.addr=0x5124, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x5124, .value=0x66, .type=IO_READ},
        {.addr=0x5125, .value=DUMMY, .type=IO_READ},
        {.addr=0x002d, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x8f88, .a=0xd1, .x=0xd7, .y=0x68, .sp=0x21, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x00d7, .value=0x56}, {.addr=0x8f88, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8f89, .a=0xd1, .x=0xd7, .y=0x68, .sp=0x21, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x00d7, .value=0x56}, {.addr=0x8f88, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8f88, .value=0x66, .type=IO_READ},
        {.addr=0x8f89, .value=DUMMY, .type=IO_READ},
        {.addr=0x00d7, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x07c8, .a=0x84, .x=0x55, .y=0x70, .sp=0x61, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0xbb}, {.addr=0x07c8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x07c9, .a=0x84, .x=0x55, .y=0x70, .sp=0x61, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0xbb}, {.addr=0x07c8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x07c8, .value=0x66, .type=IO_READ},
        {.addr=0x07c9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xaf39, .a=0xbd, .x=0xd4, .y=0x39, .sp=0xd0, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01d4, .value=0xbd}, {.addr=0xaf39, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xaf3a, .a=0xbd, .x=0xd4, .y=0x39, .sp=0xd0, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01d4, .value=0xbd}, {.addr=0xaf39, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xaf39, .value=0x66, .type=IO_READ},
        {.addr=0xaf3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d4, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x8522, .a=0x93, .x=0x53, .y=0x89, .sp=0x82, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x96}, {.addr=0x8522, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8523, .a=0x93, .x=0x53, .y=0x89, .sp=0x82, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x96}, {.addr=0x8522, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8522, .value=0x66, .type=IO_READ},
        {.addr=0x8523, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x21c9, .a=0xb8, .x=0xb7, .y=0x56, .sp=0xfa, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x44}, {.addr=0x21c9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x21ca, .a=0xb8, .x=0xb7, .y=0x56, .sp=0xfa, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x44}, {.addr=0x21c9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x21c9, .value=0x66, .type=IO_READ},
        {.addr=0x21ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xa730, .a=0x10, .x=0xae, .y=0x27, .sp=0x38, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0xb3}, {.addr=0xa730, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xa731, .a=0x10, .x=0xae, .y=0x27, .sp=0x38, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0xb3}, {.addr=0xa730, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xa730, .value=0x66, .type=IO_READ},
        {.addr=0xa731, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xcbc2, .a=0x39, .x=0x0a, .y=0x4b, .sp=0x5e, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x000a, .value=0x0a}, {.addr=0xcbc2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xcbc3, .a=0x39, .x=0x0a, .y=0x4b, .sp=0x5e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x000a, .value=0x0a}, {.addr=0xcbc2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xcbc2, .value=0x66, .type=IO_READ},
        {.addr=0xcbc3, .value=DUMMY, .type=IO_READ},
        {.addr=0x000a, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x23ac, .a=0x23, .x=0xc2, .y=0xd0, .sp=0x37, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x06}, {.addr=0x23ac, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x23ad, .a=0x23, .x=0xc2, .y=0xd0, .sp=0x37, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x06}, {.addr=0x23ac, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x23ac, .value=0x66, .type=IO_READ},
        {.addr=0x23ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x1dd2, .a=0x45, .x=0xdc, .y=0x81, .sp=0xc7, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x00dc, .value=0xd5}, {.addr=0x1dd2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1dd3, .a=0x45, .x=0xdc, .y=0x81, .sp=0xc7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x00dc, .value=0xd5}, {.addr=0x1dd2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1dd2, .value=0x66, .type=IO_READ},
        {.addr=0x1dd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00dc, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x1149, .a=0xc6, .x=0xa0, .y=0xee, .sp=0x10, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xc6}, {.addr=0x1149, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x114a, .a=0xc6, .x=0xa0, .y=0xee, .sp=0x10, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xc6}, {.addr=0x1149, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1149, .value=0x66, .type=IO_READ},
        {.addr=0x114a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D6) {
    const struct CPU_State initial_cpu = {.pc=0xbf33, .a=0xf6, .x=0xa0, .y=0x99, .sp=0xe2, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0xde}, {.addr=0xbf33, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xbf34, .a=0xf6, .x=0xa0, .y=0x99, .sp=0xe2, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xde}, {.addr=0xbf33, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xbf33, .value=0x66, .type=IO_READ},
        {.addr=0xbf34, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x9a34, .a=0x6e, .x=0x4b, .y=0xe4, .sp=0xc4, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x004b, .value=0xa8}, {.addr=0x9a34, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9a35, .a=0x6e, .x=0x4b, .y=0xe4, .sp=0xc4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x004b, .value=0xa8}, {.addr=0x9a34, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9a34, .value=0x66, .type=IO_READ},
        {.addr=0x9a35, .value=DUMMY, .type=IO_READ},
        {.addr=0x004b, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x6830, .a=0xf1, .x=0x57, .y=0x5f, .sp=0xca, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x06}, {.addr=0x6830, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6831, .a=0xf1, .x=0x57, .y=0x5f, .sp=0xca, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x06}, {.addr=0x6830, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6830, .value=0x66, .type=IO_READ},
        {.addr=0x6831, .value=DUMMY, .type=IO_READ},
        {.addr=0x0057, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x3c23, .a=0x7a, .x=0x6b, .y=0x2b, .sp=0x21, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x9b}, {.addr=0x3c23, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3c24, .a=0x7a, .x=0x6b, .y=0x2b, .sp=0x21, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x9b}, {.addr=0x3c23, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3c23, .value=0x66, .type=IO_READ},
        {.addr=0x3c24, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x070e, .a=0x41, .x=0xdf, .y=0x64, .sp=0x4b, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x00df, .value=0x41}, {.addr=0x070e, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x070f, .a=0x41, .x=0xdf, .y=0x64, .sp=0x4b, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x00df, .value=0x41}, {.addr=0x070e, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x070e, .value=0x66, .type=IO_READ},
        {.addr=0x070f, .value=DUMMY, .type=IO_READ},
        {.addr=0x00df, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x382d, .a=0x6a, .x=0x55, .y=0x8a, .sp=0x4e, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0055, .value=0x40}, {.addr=0x382d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x382e, .a=0x6a, .x=0x55, .y=0x8a, .sp=0x4e, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0055, .value=0x40}, {.addr=0x382d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x382d, .value=0x66, .type=IO_READ},
        {.addr=0x382e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0055, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x9f25, .a=0xe0, .x=0xb1, .y=0xa3, .sp=0x6c, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x7a}, {.addr=0x9f25, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x9f26, .a=0xe0, .x=0xb1, .y=0xa3, .sp=0x6c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x7a}, {.addr=0x9f25, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x9f25, .value=0x66, .type=IO_READ},
        {.addr=0x9f26, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x19c2, .a=0xb8, .x=0xb1, .y=0x42, .sp=0x40, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x00b1, .value=0x5b}, {.addr=0x19c2, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x19c3, .a=0xb8, .x=0xb1, .y=0x42, .sp=0x40, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x00b1, .value=0x5b}, {.addr=0x19c2, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x19c2, .value=0x66, .type=IO_READ},
        {.addr=0x19c3, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b1, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xb16d, .a=0x16, .x=0x78, .y=0xcf, .sp=0xfc, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0078, .value=0x6b}, {.addr=0xb16d, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xb16e, .a=0x16, .x=0x78, .y=0xcf, .sp=0xfc, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0078, .value=0x6b}, {.addr=0xb16d, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xb16d, .value=0x66, .type=IO_READ},
        {.addr=0xb16e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0078, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x80be, .a=0x03, .x=0x3f, .y=0x32, .sp=0x33, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x003f, .value=0xe3}, {.addr=0x80be, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x80bf, .a=0x03, .x=0x3f, .y=0x32, .sp=0x33, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x003f, .value=0xe3}, {.addr=0x80be, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x80be, .value=0x66, .type=IO_READ},
        {.addr=0x80bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x003f, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xfcec, .a=0x62, .x=0x0f, .y=0x2b, .sp=0xf9, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x000f, .value=0xdc}, {.addr=0xfcec, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xfced, .a=0x62, .x=0x0f, .y=0x2b, .sp=0xf9, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x000f, .value=0xdc}, {.addr=0xfcec, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xfcec, .value=0x66, .type=IO_READ},
        {.addr=0xfced, .value=DUMMY, .type=IO_READ},
        {.addr=0x000f, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x1f86, .a=0xb2, .x=0xcc, .y=0x1e, .sp=0x14, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x00cc, .value=0x8b}, {.addr=0x1f86, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x1f87, .a=0xb2, .x=0xcc, .y=0x1e, .sp=0x14, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x00cc, .value=0x8b}, {.addr=0x1f86, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x1f86, .value=0x66, .type=IO_READ},
        {.addr=0x1f87, .value=DUMMY, .type=IO_READ},
        {.addr=0x00cc, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x4483, .a=0xcc, .x=0x31, .y=0x50, .sp=0xa9, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x4c}, {.addr=0x4483, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x4484, .a=0xcc, .x=0x31, .y=0x50, .sp=0xa9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x4c}, {.addr=0x4483, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x4483, .value=0x66, .type=IO_READ},
        {.addr=0x4484, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03E3) {
    const struct CPU_State initial_cpu = {.pc=0xe835, .a=0x8a, .x=0x74, .y=0x18, .sp=0x79, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0074, .value=0x2d}, {.addr=0xe835, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xe836, .a=0x8a, .x=0x74, .y=0x18, .sp=0x79, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0074, .value=0x2d}, {.addr=0xe835, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xe835, .value=0x66, .type=IO_READ},
        {.addr=0xe836, .value=DUMMY, .type=IO_READ},
        {.addr=0x0074, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x74af, .a=0xe5, .x=0xb7, .y=0x39, .sp=0xd4, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x00b7, .value=0xee}, {.addr=0x74af, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x74b0, .a=0xe5, .x=0xb7, .y=0x39, .sp=0xd4, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x00b7, .value=0xee}, {.addr=0x74af, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x74af, .value=0x66, .type=IO_READ},
        {.addr=0x74b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b7, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x0052, .a=0xa8, .x=0xea, .y=0x2b, .sp=0xcf, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0052, .value=0x66}, {.addr=0x00ea, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x0053, .a=0xa8, .x=0xea, .y=0x2b, .sp=0xcf, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0052, .value=0x66}, {.addr=0x00ea, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x0052, .value=0x66, .type=IO_READ},
        {.addr=0x0053, .value=DUMMY, .type=IO_READ},
        {.addr=0x00ea, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x3fd8, .a=0x2d, .x=0xb9, .y=0x4c, .sp=0x5f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00b9, .value=0x89}, {.addr=0x3fd8, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x3fd9, .a=0x2d, .x=0xb9, .y=0x4c, .sp=0x5f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00b9, .value=0x89}, {.addr=0x3fd8, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x3fd8, .value=0x66, .type=IO_READ},
        {.addr=0x3fd9, .value=DUMMY, .type=IO_READ},
        {.addr=0x00b9, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_66, _66_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x95b7, .a=0x99, .x=0x96, .y=0x87, .sp=0x42, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0096, .value=0x16}, {.addr=0x95b7, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x95b8, .a=0x99, .x=0x96, .y=0x87, .sp=0x42, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0096, .value=0x16}, {.addr=0x95b7, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x95b7, .value=0x66, .type=IO_READ},
        {.addr=0x95b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0096, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("66 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
