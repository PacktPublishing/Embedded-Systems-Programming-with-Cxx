#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake-layers add-layer ../meta-customized

cd "$initial_directory"
