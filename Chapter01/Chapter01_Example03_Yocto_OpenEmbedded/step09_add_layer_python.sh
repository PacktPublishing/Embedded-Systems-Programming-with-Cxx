#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake-layers add-layer ../meta-openembedded/meta-python

cd "$initial_directory"
