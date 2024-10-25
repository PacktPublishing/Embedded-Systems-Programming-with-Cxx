#!/bin/bash

initial_directory=$(pwd)

cd poky
git clone -b dunfell-l4t-r32.4.3 https://github.com/OE4T/meta-tegra.git 
cd "$initial_directory"
