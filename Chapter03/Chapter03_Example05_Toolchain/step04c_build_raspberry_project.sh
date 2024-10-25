#!/bin/bash

initial_directory=$(pwd)

cd build-raspberry

# ninja
cmake --build .

cd "$initial_directory"
