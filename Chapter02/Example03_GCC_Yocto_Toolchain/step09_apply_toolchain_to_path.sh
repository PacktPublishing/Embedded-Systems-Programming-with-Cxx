#!/bin/bash

initial_directory=$(pwd)

# The code below will change to the Toolchain folder
#   and run the environment-setup script
#   without needing to know exactly its name/version/platform
#
# e.g.: /opt/poky/3.1.33/environment-setup-cortexa7t2hf-neon-vfpv4-poky-linux-gnueabi
# 
# If you installed toolchain in a different directory, 
#   change the lines below properly

cd /opt/poky
toolchain_directory=$(ls -t | head -n 1)
cd "$toolchain_directory"

environment_setup_script=$(ls -t *environment-setup* | head -n 1)
source "$environment_setup_script"

cd "$initial_directory"

# Printing some of the created variables:
echo $AS
echo $LD
echo $CC
echo $CXX
echo $CPP
