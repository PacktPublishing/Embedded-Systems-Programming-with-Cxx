#!/bin/bash

sed -i '$ a IMAGE_INSTALL_append = " cmake"\n' poky/build/conf/local.conf
cat poky/build/conf/local.conf
