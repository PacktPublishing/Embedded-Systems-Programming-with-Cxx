#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install cmake
    sudo apt-get -y install ninja-build
    sudo apt-get -y install python3-pip
    pip3 install conan
    conan profile detect

    # Jetson Nano Toolchain
    sudo apt-get install -y gcc-aarch64-linux-gnu
    sudo apt-get install -y g++-aarch64-linux-gnu
    sudo apt-get install -y binutils-aarch64-linux-gnu
else
    echo "Please manually install cmake, ninja, conan and ARM toolchain."
fi
