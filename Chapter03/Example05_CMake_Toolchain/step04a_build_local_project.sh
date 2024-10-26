#!/bin/bash

initial_directory=$(pwd)

cd build-local

# ninja
cmake --build .

cd "$initial_directory"
