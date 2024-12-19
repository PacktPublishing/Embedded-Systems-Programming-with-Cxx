#!/bin/bash

initial_directory=$(pwd)

cd build
chmod +x example_binary
./example_binary

cd "$initial_directory"
