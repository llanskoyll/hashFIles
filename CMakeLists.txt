cmake_minimum_required(VERSION 3.9)

project(fileHash)


SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-fopenmp -lbenchmark -std=c++14 -pthread")
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
