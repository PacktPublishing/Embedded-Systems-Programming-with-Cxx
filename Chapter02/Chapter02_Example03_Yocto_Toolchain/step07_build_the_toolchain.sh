#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake meta-toolchain
ls -la tmp/deploy/sdk/

cd "$initial_directory"
