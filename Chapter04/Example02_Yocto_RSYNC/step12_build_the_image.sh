#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake core-image-minimal
ls -la tmp/deploy/images/

cd "$initial_directory"
