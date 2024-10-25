#!/bin/bash

cd poky/build
bitbake meta-toolchain
ls -la tmp/deploy/toolchain/
