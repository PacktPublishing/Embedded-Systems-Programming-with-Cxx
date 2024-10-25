#!/bin/bash

initial_directory=$(pwd)

mkdir build-local
cd build-local
conan install .. --build=missing --output-folder .

cd "$initial_directory"
