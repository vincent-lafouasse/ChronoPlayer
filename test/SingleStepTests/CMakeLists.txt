cmake_minimum_required(VERSION 3.16)

# Support both standalone and parent project builds
if(NOT PROJECT_NAME)
    project(SingleStepTests LANGUAGES NONE)
    enable_testing()
endif()

find_program(ZIG_EXECUTABLE zig REQUIRED)

if(ZIG_EXECUTABLE)
    message(STATUS "Found Zig: ${ZIG_EXECUTABLE}")

    execute_process(
        COMMAND ${ZIG_EXECUTABLE} version
        OUTPUT_VARIABLE ZIG_VERSION
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    message(STATUS "Zig version: ${ZIG_VERSION}")

    # Add test that runs zig build test with verbose output
    add_test(
        NAME SingleStepTests
        COMMAND ${ZIG_EXECUTABLE} build test --summary all
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )

    # Force colored output even when piped through CTest
    set_tests_properties(SingleStepTests PROPERTIES
        ENVIRONMENT "CLICOLOR_FORCE=1;FORCE_COLOR=1"
    )

else()
    message(WARNING "Zig not found - skipping Zig tests")
endif()
