cmake_minimum_required(VERSION 3.0)

project(test_task)

set(SOURCES
  main.cpp
  jsonReader.cpp
)
set(HEADERS
  jsonReader.h
  json.hpp
)

add_executable(App ${SOURCES} ${HEADERS})

set_target_properties( ## свойства к проекту
  App PROPERTIES ##
  CXX_STANDARD 11 ## стандарт плюсов для исполняемого файла
  CXX_STANDARD_REQUIRED ON ## требуется этот стандарт, иначе эрор
)
