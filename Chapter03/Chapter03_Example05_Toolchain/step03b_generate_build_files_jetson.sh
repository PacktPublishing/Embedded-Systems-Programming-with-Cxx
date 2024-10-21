#!/bin/bash

cd build-jetson
cmake .. -DCMAKE_TOOLCHAIN_FILE=../toolchain-jetson.cmake -G Ninja -DCMAKE_BUILD_TYPE=Release
