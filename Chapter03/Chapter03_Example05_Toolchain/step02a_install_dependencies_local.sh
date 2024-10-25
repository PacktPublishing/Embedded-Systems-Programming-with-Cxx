#!/bin/bash

mkdir build-local
cd build-local
conan install .. --build=missing --output-folder .
cd -
