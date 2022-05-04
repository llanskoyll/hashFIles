cmake_minimum_required(VERSION 3.0)

project(hashFile)


SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++14 -pthread")
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)

# cmake_minimum_required(VERSION 3.0)
#
# project(test_task)
#
# find_package(Threads)
#

#
# set(SOURCES
#   main.cpp
#   jsonReader.cpp
#   hash.cpp
#   error.cpp
#   fileInfo.cpp
#   print.cpp
# )
# set(HEADERS
#   jsonReader.h
#   json.hpp
#   hash.h
#   error.h
#   fileInfo.h
#   print.h
# )
#
#
# add_library(${This} STATIC ${SOURCES} ${HEADERS})
# add_executable(App ${SOURCES} ${HEADER})
# add_subdirectory(test)
# target_link_libraries(App ${This})
