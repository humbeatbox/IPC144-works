cmake_minimum_required(VERSION 3.27)
project(finalProject C)

set(CMAKE_C_STANDARD 90)

add_executable(finalProject main.c
        POS.h
        utils.c
        utils.h
        PosUI.c
        PosUI.h
        PosApp.c
        PosApp.h)
