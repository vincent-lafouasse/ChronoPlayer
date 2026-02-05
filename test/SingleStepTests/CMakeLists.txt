cmake_minimum_required(VERSION 3.16)

# Support both standalone and parent project builds
if(NOT PROJECT_NAME)
    project(SingleStepTests LANGUAGES C)
    enable_testing()
endif()

message(" -- SingleStepTests: nothing here yet :)")

set(TESTED_SRC_DIR ../../src)
set(TESTED_SOURCE
    ${TESTED_SRC_DIR}/cpu.c
    ${TESTED_SRC_DIR}/instructions.gen.c
    ${TESTED_SRC_DIR}/instruction_table.gen.c
    ${TESTED_SRC_DIR}/bus_io.c
)

set(COMPILE_OPTIONS -Wall -Wextra -Wpedantic -g3)
set(LINKED_LIBRARIES m)
set(INCLUDES
    ${TESTED_SRC_DIR}
    ${CMAKE_SOURCE_DIR}/test/utest.h
)

set(BASENAME SingleStepTests)

function(register_test opcode)
    set(name "${BASENAME}${opcode}")
    set(test_file "${opcode}.c")
    add_executable(${name} ${test_file} ${TESTED_SOURCE})
    target_compile_options(${name} PRIVATE ${COMPILE_OPTIONS})
    target_include_directories(${name} PRIVATE ${INCLUDES})
    target_link_libraries(${name} PRIVATE ${LINKED_LIBRARIES})
    add_test(NAME ${name} COMMAND ${name})
endfunction()

# -----------------
register_test("00")
register_test("20")
register_test("40")
register_test("60")
register_test("80")
register_test("e0")
