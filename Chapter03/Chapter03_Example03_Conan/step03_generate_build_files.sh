#!/bin/bash

initial_directory=$(pwd)

cd build
cmake .. -DCMAKE_BUILD_TYPE=Release

cd "$initial_directory"
