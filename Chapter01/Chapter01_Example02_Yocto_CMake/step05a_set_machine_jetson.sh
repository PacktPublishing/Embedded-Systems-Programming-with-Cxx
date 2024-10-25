#!/bin/bash

sed -i '/^MACHINE\s*?=/!s/^/MACHINE ?= "jetson-nano"\n/' poky/build/conf/local.conf
