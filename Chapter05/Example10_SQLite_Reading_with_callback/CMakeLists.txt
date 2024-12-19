cmake_minimum_required(VERSION 3.10)

project(Chapter05_Example01_Nlohmann_reading)

include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

find_package(SQLite3 REQUIRED)

add_executable(example_binary example_source.cpp)

target_link_libraries(example_binary SQLite::SQLite3)
