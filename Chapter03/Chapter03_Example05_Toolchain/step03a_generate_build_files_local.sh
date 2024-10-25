#!/bin/bash

initial_directory=$(pwd)

cd build-local
cmake .. -G Ninja -DCMAKE_BUILD_TYPE=Release

cd "$initial_directory"
