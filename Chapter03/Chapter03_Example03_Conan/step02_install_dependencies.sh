#!/bin/bash

mkdir build
cd build
conan install .. --build=missing --output-folder .
