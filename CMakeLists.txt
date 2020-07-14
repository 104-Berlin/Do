cmake_minimum_required(VERSION 3.10)


if(Win32)
    # IF WINDOWS
    add_definitions(_WIN)
elseif(UNIX)
if(APPLE)
    # IF APPLE
    add_definitions(_MAC)
else()
    # IF LINUX
    add_definitions(_LIN)
endif(APPLE)

endif(Win32)


project(Do_Scripting)



add_subdirectory(core)