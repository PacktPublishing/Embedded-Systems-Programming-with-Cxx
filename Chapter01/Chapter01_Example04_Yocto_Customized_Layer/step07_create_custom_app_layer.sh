#!/bin/bash

cd poky/build
bitbake-layers create-layer ../meta-example-layer
