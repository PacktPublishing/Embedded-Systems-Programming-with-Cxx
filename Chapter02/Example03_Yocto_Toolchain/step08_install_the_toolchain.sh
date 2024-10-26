#!/bin/bash

initial_directory=$(pwd)

cd poky/build/tmp/deploy/sdk/

# Change to use the line below according to your Yocto system:
# cd poky/build/tmp/deploy/toolchain/

# The code below will run the Toolchain script
#   without needing to know exactly its name/version/platform
#
# e.g.: poky-glibc-x86_64-raspberrypi3-toolchain-1.0.sh
# e.g.: poky-glibc-x86_64-jetson-nano-toolchain-2.2.sh
# e.g.: poky-glibc-x86_64-meta-toolchain-cortexa7t2hf-neon-vfpv4-raspberrypi3-toolchain-3.1.33.sh

bash $(ls -t *toolchain*.sh | head -n 1)

cd "$initial_directory"
