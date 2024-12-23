cmake_minimum_required(VERSION 3.10)

project(Chapter05_Example15_Protobuf_SQLite_Nlohmann_Properties_handling)

include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

find_package(nlohmann_json REQUIRED)
find_package(SQLite3 REQUIRED)
find_package(Protobuf REQUIRED)

# Important:
# There is a bug when a Protobuf compiler is installed on the system, 
# CMake protobuf_generate_cpp doesn't get the version specified in conanfile.txt
# As a workaround, uninstall Protobuf from your system before calling CMake build
protobuf_generate_cpp(PROTO_SRC PROTO_HDR example_model.proto)

include_directories(${CMAKE_BINARY_DIR}) # so the source can find the generated example_model.pb.h

add_executable(example_binary example_source.cpp ${PROTO_SRC})

target_link_libraries(example_binary    protobuf::libprotobuf
                                        SQLite::SQLite3
                                        nlohmann_json::nlohmann_json    )
