cmake_minimum_required(VERSION 3.7)
project(MultiMapSLL)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        Multimap.h Multimap.cpp)
add_executable(MultiMapSLL ${SOURCE_FILES})