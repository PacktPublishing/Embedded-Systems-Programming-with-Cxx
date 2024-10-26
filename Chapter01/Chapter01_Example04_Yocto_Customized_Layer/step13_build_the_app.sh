#!/bin/bash

initial_directory=$(pwd)

cd poky/build
bitbake example

cd "$initial_directory"
