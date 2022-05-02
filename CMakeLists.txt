cmake_minimum_required(VERSION 2.6)

project(test_task)

set(SOURCES
  main.cpp
  jsonReader.cpp
  hash.cpp
  trappingError.cpp
)
set(HEADERS
  jsonReader.h
  json.hpp
  hash.h
  trappingError.h
)
SET(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread")
find_package(Threads)
add_executable(App ${SOURCES} ${HEADERS})


target_link_libraries(App ${CMAKE_THREAD_LIBS_INIT})
set_target_properties( ## свойства к проекту
  App PROPERTIES ##
  CXX_STANDARD 11 ## стандарт плюсов для исполняемого файла
  CXX_STANDARD_REQUIRED ON ## требуется этот стандарт, иначе эрор
)
