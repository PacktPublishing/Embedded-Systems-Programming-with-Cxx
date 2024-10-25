#!/bin/bash

sed -i '/^IMAGE_INSTALL_append.*=/!a IMAGE_INSTALL_append = " python3"' poky/build/conf/local.conf
