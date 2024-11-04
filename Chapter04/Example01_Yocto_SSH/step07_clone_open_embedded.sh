#!/bin/bash

initial_directory=$(pwd)

cd poky
git clone -b dunfell https://git.openembedded.org/meta-openembedded.git

cd "$initial_directory"
