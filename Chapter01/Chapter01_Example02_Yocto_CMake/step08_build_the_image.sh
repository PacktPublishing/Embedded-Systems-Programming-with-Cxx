#!/bin/bash

cd poky/build
bitbake core-image-minimal
ls -la poky/build/tmp/deploy/images/
