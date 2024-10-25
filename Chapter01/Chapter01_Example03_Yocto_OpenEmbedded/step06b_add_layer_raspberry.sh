#!/bin/bash

cd poky/build
bitbake-layers add-layer ../meta-raspberrypi
cd -
