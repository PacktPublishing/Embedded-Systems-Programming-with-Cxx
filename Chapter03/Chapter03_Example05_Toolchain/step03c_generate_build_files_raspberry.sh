#!/bin/bash

initial_directory=$(pwd)

cd build-raspberry
cmake .. -DCMAKE_TOOLCHAIN_FILE=../toolchain-raspberry.cmake -G Ninja -DCMAKE_BUILD_TYPE=Release

cd "$initial_directory"
