#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install cmake
    sudo apt-get -y install ninja-build
    sudo apt-get -y install python3-pip
    pip3 install conan
    conan profile detect

    # Raspberry Pi Toolchain
    sudo apt-get install -y gcc-arm-linux-gnueabihf
    sudo apt-get install -y g++-arm-linux-gnueabihf
    sudo apt-get install -y binutils-arm-linux-gnueabihf
else
    echo "Please manually install cmake, ninja, conan and ARM toolchain."
fi
