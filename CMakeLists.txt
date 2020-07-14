cmake_minimum_required(VERSION 3.10)

include_directories(core)

if(WIN32)
    # IF WINDOWS
    add_definitions(-D_WIN)
elseif(UNIX)
if(APPLE)
    # IF APPLE
    add_definitions(-D_MAC)
else()
    # IF LINUX
    add_definitions(-D_LIN)
endif(APPLE)
endif(WIN32)


project(Do_Scripting)



add_subdirectory(core)