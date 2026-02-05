cmake_minimum_required(VERSION 3.16)

# Support both standalone and parent project builds
if(NOT PROJECT_NAME)
    project(SingleStepTests LANGUAGES C)
    enable_testing()
endif()

set(TESTED_SRC_DIR ../../src)
set(COMPILE_OPTIONS -Wall -Wextra -Wpedantic -g3)
set(INCLUDES
    .
    ${TESTED_SRC_DIR}
    ${CMAKE_SOURCE_DIR}/test/utest.h
)

add_library(spc700_lib STATIC
    ${TESTED_SRC_DIR}/cpu.c
    ${TESTED_SRC_DIR}/instructions.gen.c
    ${TESTED_SRC_DIR}/instruction_table.gen.c
    ${TESTED_SRC_DIR}/bus_io.c
)
target_compile_options(spc700_lib PRIVATE ${COMPILE_OPTIONS})
target_include_directories(spc700_lib PUBLIC ${TESTED_SRC_DIR})

set(BASENAME SingleStepTests)

function(register_test opcode)
    set(name "${BASENAME}${opcode}")
    set(test_file "tests/${opcode}.gen.c")
    add_executable(${name} ${test_file})
    target_compile_options(${name} PRIVATE ${COMPILE_OPTIONS})
    target_include_directories(${name} PRIVATE ${INCLUDES})
    target_link_libraries(${name} PRIVATE spc700_lib m)
    add_test(NAME ${name} COMMAND ${name})
endfunction()

# -----------------
register_test("00")
register_test("20")
register_test("40")
register_test("60")
register_test("80")
register_test("e0")

register_test("07")
register_test("17")
register_test("27")
register_test("37")
register_test("47")
register_test("57")
register_test("67")
register_test("77")
register_test("87")
register_test("97")
register_test("a7")
register_test("b7")
register_test("c7")
register_test("d7")
register_test("e7")
register_test("f7")

register_test("08")
register_test("18")
register_test("28")
register_test("38")
register_test("48")
register_test("58")
register_test("68")
register_test("78")
register_test("88")
register_test("98")
register_test("a8")
register_test("b8")
register_test("c8")
register_test("d8")
register_test("e8")
register_test("f8")
