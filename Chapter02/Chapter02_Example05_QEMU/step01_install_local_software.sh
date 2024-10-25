#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install qemu
    sudo apt-get -y install qemu-utils
    sudo apt-get -y install qemu-system-arm
else
    echo "Please manually install qemu."
fi
