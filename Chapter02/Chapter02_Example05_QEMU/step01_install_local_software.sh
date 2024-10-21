#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install qemu
else
    echo "Please manually install qemu."
fi
