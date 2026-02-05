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

function(register_column lsb)
    foreach(msb "0" "1" "2" "3" "4" "5" "6" "7" "8" "9" "a" "b" "c" "d" "e" "f")
        register_test("${msb}${lsb}")
    endforeach()
endfunction()

function(register_column_except lsb)
    # ARGN contains all additional arguments (the exclusion list)
    set(exclusions ${ARGN})
    foreach(msb "0" "1" "2" "3" "4" "5" "6" "7" "8" "9" "a" "b" "c" "d" "e" "f")
        set(opcode "${msb}${lsb}")
        if(NOT ${opcode} IN_LIST exclusions)
            register_test("${opcode}")
        endif()
    endforeach()
endfunction()

# -----------------

foreach(opcode "00" "20" "40" "60" "80" "e0")
    register_test(${opcode})
endforeach()

register_column("1")
register_column_except("4" "d4")
register_column("5")
register_column("6")
register_column("7")
register_column("8")
register_column_except("9" "d9")
