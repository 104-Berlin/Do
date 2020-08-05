cmake_minimum_required(VERSION 3.10)

file(GLOB_RECURSE SRC_FILES *.c)

add_executable(do   main.c
                    ${SRC_FILES})