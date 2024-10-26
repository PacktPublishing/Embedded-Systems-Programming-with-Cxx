#!/bin/bash

initial_directory=$(pwd)

mkdir build
cd build
conan install .. --build=missing --output-folder .

cd "$initial_directory"
