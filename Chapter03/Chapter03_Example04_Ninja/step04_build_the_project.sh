#!/bin/bash

initial_directory=$(pwd)

cd build

# ninja
cmake --build .


cd "$initial_directory"
