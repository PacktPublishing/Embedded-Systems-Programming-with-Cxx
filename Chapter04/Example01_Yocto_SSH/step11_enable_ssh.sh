#!/bin/bash

sed -i '$ a SYSTEMD_AUTO_ENABLE:pn-openssh = "enable"\n' poky/build/conf/local.conf
cat poky/build/conf/local.conf
