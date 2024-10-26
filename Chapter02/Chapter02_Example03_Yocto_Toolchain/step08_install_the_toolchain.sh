#!/bin/bash

initial_directory=$(pwd)

cd poky/build/tmp/deploy/sdk/

# The code below will run the Toolchain script
#   without needing to know exactly its name/version/platform

# e.g.: poky-glibc-x86_64-raspberrypi3-toolchain-1.0.sh
# e.g.: poky-glibc-x86_64-jetson-nano-toolchain-2.2.sh

bash $(ls -t *toolchain*.sh | head -n 1)


cd "$initial_directory"
