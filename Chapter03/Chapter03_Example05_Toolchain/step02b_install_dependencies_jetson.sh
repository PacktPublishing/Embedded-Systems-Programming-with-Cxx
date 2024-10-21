#!/bin/bash

cp conan-jetson.profile ~/.conan2/profiles

mkdir build-jetson
cd build-jetson

conan install .. --build=missing --output-folder . --profile=conan-jetson.profile 
