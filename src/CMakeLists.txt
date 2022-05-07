set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp *.hpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})


find_package(benchmark REQUIRED)
target_link_libraries(${BINARY}_run PRIVATE benchmark::benchmark)

find_package(OpenMP)
if(OpenMP_CXX_FOUND)
    target_link_libraries(${BINARY}_run PUBLIC OpenMP::OpenMP_CXX)
endif()
