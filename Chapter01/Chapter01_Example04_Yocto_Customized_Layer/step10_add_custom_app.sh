#!/bin/bash

sed -i '/^IMAGE_INSTALL_append.*=/!a IMAGE_INSTALL_append = " example-app"' poky/build/conf/local.conf
