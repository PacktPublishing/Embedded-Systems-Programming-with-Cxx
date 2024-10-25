#!/bin/bash

cd poky/build
bitbake-layers add-layer ../meta-openembedded/meta-python
cd -
