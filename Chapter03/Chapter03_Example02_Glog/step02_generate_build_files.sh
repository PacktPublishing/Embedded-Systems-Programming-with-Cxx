#!/bin/bash

initial_directory=$(pwd)

mkdir build
cd build
cmake ..

cd "$initial_directory"