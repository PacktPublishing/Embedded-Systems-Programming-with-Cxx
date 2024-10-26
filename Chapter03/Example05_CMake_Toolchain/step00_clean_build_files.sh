#!/bin/bash

rm -rf build*
rm CMakeUserPresets.json
conan remove "*" -c
