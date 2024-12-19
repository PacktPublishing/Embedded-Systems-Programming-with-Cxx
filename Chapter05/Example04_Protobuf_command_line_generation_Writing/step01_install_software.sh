#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get -y install gcc
    sudo apt-get -y install protobuf-compiler
    sudo apt-get -y install libprotobuf-dev
    sudo apt-get -y install libprotoc-dev
else
    echo "Please manually install gcc and protobuf."
fi
