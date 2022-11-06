cmake_minimum_required(VERSION 3.23)
project(TemplateCppConsole)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(TemplateCppConsole ${SOURCE_FILES})

include_directories(TemplateCppLibrary)
add_subdirectory(TemplateCppLibrary)

target_link_libraries(TemplateCppConsole TemplateCppLibrary)

add_subdirectory(Google_tests)