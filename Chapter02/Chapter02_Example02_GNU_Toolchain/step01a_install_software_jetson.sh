#!/bin/bash

if [ -d "/etc/apt" ]; then

    # Jetson Nano Toolchain
    sudo apt-get install -y gcc-aarch64-linux-gnu
    sudo apt-get install -y g++-aarch64-linux-gnu
    sudo apt-get install -y binutils-aarch64-linux-gnu
else
    echo "Please manually install ARM toolchain."
fi
