cmake_minimum_required(VERSION 3.27)
project(TETRIZ)

set(CMAKE_CXX_STANDARD 20)

add_executable(TETRIZ main.cpp
        terminal.h
        terminal.cpp
        utils.h
        utils.cpp)
