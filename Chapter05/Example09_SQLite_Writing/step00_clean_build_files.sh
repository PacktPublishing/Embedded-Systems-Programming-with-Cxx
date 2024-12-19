#!/bin/bash

rm *.db
rm -rf build
rm CMakeUserPresets.json
conan remove "*" -c
