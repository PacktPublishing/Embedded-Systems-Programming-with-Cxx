#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake-layers create-layer ../meta-customized

cd "$initial_directory"
