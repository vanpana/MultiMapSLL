cmake_minimum_required(VERSION 3.6)
project(Multimap)

set(CMAKE_CXX_STANDARD 11)

SET(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
SET(CMAKE_C_FLAGS "-g -O0 -Wall -W -fprofile-arcs -ftest-coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

set(CLANG_ENABLE_CODE_COVERAGE YES)

set(SOURCE_FILES
main.cpp
Entities/Multimap.cpp Entities/Multimap.h
Entities/Date.cpp Entities/Date.h
Repository/Repository.cpp Repository/Repository.h
Controller/Controller.h
UI/Console.cpp UI/Console.h
)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(Multimap ${SOURCE_FILES})
target_link_libraries(Multimap gtest gtest_main)
