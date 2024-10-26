#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install gcc
    sudo apt-get -y install cmake
    sudo apt-get -y install libgoogle-glog-dev
else
    echo "Please manually install gcc, cmake and glog."
fi
