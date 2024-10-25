#!/bin/bash

initial_directory=$(pwd)

cd build-jetson

# ninja
cmake --build .

cd "$initial_directory"
