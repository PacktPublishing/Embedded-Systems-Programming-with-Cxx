#!/bin/bash

sed -i '$ a IMAGE_INSTALL_append = " python3"\n' poky/build/conf/local.conf
cat poky/build/conf/local.conf
