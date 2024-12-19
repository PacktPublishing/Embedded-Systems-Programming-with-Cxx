#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install gcc
    sudo apt-get -y install cmake
    sudo apt-get -y install ninja-build
    sudo apt-get -y install python3-pip
    pip3 install conan
    conan profile detect
else
    echo "Please manually install gcc, cmake, conan and ninja."
fi
