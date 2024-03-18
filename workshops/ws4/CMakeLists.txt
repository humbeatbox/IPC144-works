cmake_minimum_required(VERSION 3.27)
project(ws4 C)

set(CMAKE_C_STANDARD 99)

add_executable(ws4 main.c
        utils.c
        utils.h
        report.c
        report.h
)
