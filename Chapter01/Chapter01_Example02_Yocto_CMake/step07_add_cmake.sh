#!/bin/bash

sed -i '/^IMAGE_INSTALL_append.*=/!a IMAGE_INSTALL_append = " cmake"' poky/build/conf/local.conf
