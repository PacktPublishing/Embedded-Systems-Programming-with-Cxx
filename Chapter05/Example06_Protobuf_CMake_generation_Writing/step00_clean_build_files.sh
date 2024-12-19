#!/bin/bash

rm *.bin
rm -rf build
rm CMakeUserPresets.json
conan remove "*" -c
