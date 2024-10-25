#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake-layers create-layer ../meta-example-layer

cd "$initial_directory"
