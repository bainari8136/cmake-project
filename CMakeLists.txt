cmake_minimum_required(VERSION 3.30.0)

project(cmake-project)

include(standards.cmake)

set_language_standard()

include_directories(include)

file(GLOB SOURCES "src/*.cxx")


add_executable(cmake_demo ${SOURCES})

install(TARGETS cmake_demo RUNTIME DESTINATION bin)
include(CPack)
