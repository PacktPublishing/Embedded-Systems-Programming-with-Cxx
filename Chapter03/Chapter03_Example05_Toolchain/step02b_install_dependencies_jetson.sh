#!/bin/bash

initial_directory=$(pwd)

cp conan-jetson.profile ~/.conan2/profiles/conan-jetson.profile

mkdir build-jetson
cd build-jetson

conan install .. --build=missing --output-folder . --profile=conan-jetson.profile 


cd "$initial_directory"
