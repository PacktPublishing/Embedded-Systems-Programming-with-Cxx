#!/bin/bash

cd build-jetson
readelf -h example_binary | grep Machine
cd -
