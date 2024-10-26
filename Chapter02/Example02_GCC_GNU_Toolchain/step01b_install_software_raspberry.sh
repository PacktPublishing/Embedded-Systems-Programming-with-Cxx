#!/bin/bash

if [ -d "/etc/apt" ]; then

    # Raspberry Pi Toolchain
    sudo apt-get install -y gcc-arm-linux-gnueabihf
    sudo apt-get install -y g++-arm-linux-gnueabihf
    sudo apt-get install -y binutils-arm-linux-gnueabihf
else
    echo "Please manually install ARM toolchain."
fi
