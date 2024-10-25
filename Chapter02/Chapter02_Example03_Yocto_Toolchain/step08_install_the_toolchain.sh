#!/bin/bash

cd poky/build/tmp/deploy/toolchain/

# The code below will run the Toolchain script
#   without needing to know exactly its name/version/platform

# e.g.: poky-glibc-x86_64-raspberrypi3-toolchain-1.0.sh
# e.g.: poky-glibc-x86_64-jetson-nano-toolchain-2.2.sh

source $(ls -t *toolchain*.sh | head -n 1)
