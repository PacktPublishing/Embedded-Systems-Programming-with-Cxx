#!/bin/bash

cd poky/build
bitbake core-image-minimal
ls -la tmp/deploy/images/
cd -
