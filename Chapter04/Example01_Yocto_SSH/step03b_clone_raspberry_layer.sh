#!/bin/bash

initial_directory=$(pwd)

cd poky
git clone -b dunfell git://git.yoctoproject.org/meta-raspberrypi.git

cd "$initial_directory"
