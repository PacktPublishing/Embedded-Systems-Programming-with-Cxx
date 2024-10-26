#!/bin/bash

initial_directory=$(pwd)

cd build-raspberry
readelf -h example_binary | grep Machine

cd "$initial_directory"
