cmake_minimum_required(VERSION 3.10)

project(Chapter03_Example05_Toolchain)

include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

find_package(Glog REQUIRED)

add_executable(example_binary example_source.cpp)

target_link_libraries(example_binary glog::glog)
