#!/bin/bash

sed -i '$ a MACHINE ?= "jetson-nano"\n' poky/build/conf/local.conf
cat poky/build/conf/local.conf
