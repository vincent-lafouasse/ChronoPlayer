set(TESTED_SRC "${CMAKE_SOURCE_DIR}/src")

add_executable(InstructionTest
    nop_test.c
    ${TESTED_SRC}/instructions.gen.c
    ${TESTED_SRC}/bus_io.c
)

target_include_directories(InstructionTest PRIVATE
    ${TESTED_SRC}
    ${CMAKE_SOURCE_DIR}/test/utest.h
)

target_compile_options(InstructionTest PRIVATE
    -Wall -Wextra -Wpedantic -g3
)

target_link_libraries(InstructionTest PRIVATE m)

set_target_properties(InstructionTest PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

add_test(NAME InstructionTest COMMAND InstructionTest)
