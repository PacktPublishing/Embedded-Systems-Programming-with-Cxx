#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake-layers add-layer ../meta-example-layer

cd "$initial_directory"
