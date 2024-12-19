#!/bin/bash

rm example_output.json
rm -rf build
rm CMakeUserPresets.json
conan remove "*" -c
