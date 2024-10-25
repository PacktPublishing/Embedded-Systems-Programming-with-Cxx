#!/bin/bash

sed -i '/^MACHINE\s*?=/!s/^/MACHINE ?= "raspberrypi3"\n/' poky/build/conf/local.conf
