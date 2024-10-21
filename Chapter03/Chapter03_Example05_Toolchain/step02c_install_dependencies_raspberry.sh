#!/bin/bash

cp conan-raspberry.profile ~/.conan2/profiles

mkdir build-raspberry
cd build-raspberry

conan install .. --build=missing --output-folder . --profile=conan-raspberry.profile 
