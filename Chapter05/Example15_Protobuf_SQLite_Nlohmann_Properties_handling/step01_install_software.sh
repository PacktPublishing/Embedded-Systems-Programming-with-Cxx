#!/bin/bash

if [ -d "/etc/apt" ]; then

    # Important:
    # There is a bug when a Protobuf compiler is installed on the system, 
    # CMake protobuf_generate_cpp doesn't get the version specified in conanfile.txt
    # As a workaround, uninstall Protobuf from your system before calling CMake build
    sudo apt-get -y remove --purge protobuf-compiler 
    sudo apt-get -y remove --purge libprotobuf-dev 
    sudo apt-get -y remove --purge libprotoc-dev

    sudo apt-get -y update
    sudo apt-get -y install gcc
    sudo apt-get -y install cmake
    sudo apt-get -y install sqlite3
    sudo apt-get -y install ninja-build
    sudo apt-get -y install python3-pip
    pip3 install conan
    conan profile detect
else
    echo "Please manually install gcc, cmake, conan and ninja."
fi
