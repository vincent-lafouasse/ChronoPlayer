cmake_minimum_required(VERSION 3.16)

# Support both standalone and parent project builds
if(NOT PROJECT_NAME)
    project(SingleStepTests LANGUAGES NONE)
    enable_testing()
endif()

message(" -- SingleStepTests: nothing here yet :)")
