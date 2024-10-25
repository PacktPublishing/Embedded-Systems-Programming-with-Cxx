#!/bin/bash

sed -i '$ a MACHINE ?= "raspberrypi3"\n' poky/build/conf/local.conf
cat poky/build/conf/local.conf
