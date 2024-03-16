cmake_minimum_required(VERSION 3.27)
project(ConsoleApplication1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ConsoleApplication1
        linkedintlist.cpp
        linkedintlist.h
        main.cpp
        node.cpp
        node.h)
