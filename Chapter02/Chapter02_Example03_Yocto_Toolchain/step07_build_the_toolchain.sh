#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake meta-toolchain
ls -la tmp/deploy/toolchain/

cd "$initial_directory"
