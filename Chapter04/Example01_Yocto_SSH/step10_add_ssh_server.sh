#!/bin/bash

sed -i '$ a EXTRA_IMAGE_FEATURES += "ssh-server-openssh"\n' poky/build/conf/local.conf
cat poky/build/conf/local.conf
