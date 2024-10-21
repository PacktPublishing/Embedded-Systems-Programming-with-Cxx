cmake_minimum_required(VERSION 3.10)

project(Chapter03_Example02_Glog)

find_package(Glog REQUIRED)

add_executable(example_binary example_source.cpp)

target_link_libraries(example_binary glog::glog)
