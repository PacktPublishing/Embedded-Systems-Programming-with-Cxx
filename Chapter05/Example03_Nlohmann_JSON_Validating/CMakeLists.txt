cmake_minimum_required(VERSION 3.10)

project(Chapter05_Example02_Nlohmann_validating)

include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

find_package(nlohmann_json REQUIRED)

add_executable(example_binary example_source.cpp)

target_link_libraries(example_binary nlohmann_json::nlohmann_json)
