#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake-layers add-layer ../meta-openembedded/meta-oe

cd "$initial_directory"
