#!/bin/bash

initial_directory=$(pwd)

cd build

# make
cmake --build .


cd "$initial_directory"
