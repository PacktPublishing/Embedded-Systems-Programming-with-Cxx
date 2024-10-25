#!/bin/bash

cd build-local
cmake .. -G Ninja -DCMAKE_BUILD_TYPE=Release
cd -
