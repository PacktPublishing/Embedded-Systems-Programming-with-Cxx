#!/bin/bash

if [ -d "/etc/apt" ]; then
    sudo apt-get -y update
    sudo apt-get install -y sed
    sudo apt-get install -y gawk
    sudo apt-get install -y wget
    sudo apt-get install -y git
    sudo apt-get install -y git-core
    sudo apt-get install -y diffstat
    sudo apt-get install -y unzip
    sudo apt-get install -y texinfo
    sudo apt-get install -y gcc
    sudo apt-get install -y g++
    sudo apt-get install -y gcc-multilib
    sudo apt-get install -y coreutils
    sudo apt-get install -y build-essential
    sudo apt-get install -y chrpath
    sudo apt-get install -y socat
    sudo apt-get install -y cpio
    sudo apt-get install -y python3
    sudo apt-get install -y python3-pip
    sudo apt-get install -y python3-pexpect
    sudo apt-get install -y xz-utils
    sudo apt-get install -y debianutils
    sudo apt-get install -y iputils-ping
    sudo apt-get install -y python3-git
    sudo apt-get install -y python3-jinja2
    sudo apt-get install -y libegl1-mesa
    sudo apt-get install -y libsdl1.2-dev
    sudo apt-get install -y pylint
    sudo apt-get install -y xterm
    sudo apt-get install -y locales
    sudo apt-get install -y subversion
    sudo apt-get install -y zstd
    sudo apt-get install -y liblz4-tool 
    sudo apt-get install -y file  
    sudo apt-get install -y libacl1
    sudo apt-get install -y python3-setuptools
    sudo apt-get install -y python3-subunit
    sudo apt-get install -y libncurses5-dev
    sudo apt-get install -y libncursesw5-dev
    sudo apt-get install -y libsdl2-dev
    sudo apt-get install -y libtool
    sudo apt-get install -y autoconf
    sudo apt-get install -y automake
    sudo apt-get install -y curl
    sudo apt-get install -y bison
    sudo apt-get install -y flex
    sudo apt-get install -y lzop
    sudo apt-get install -y zlib1g-dev
    sudo apt-get install -y libxml2-utils
    sudo apt-get install -y u-boot-tools
    sudo apt-get install -y device-tree-compiler
    sudo apt-get install -y libssl-dev
    sudo apt-get install -y bc
    sudo apt-get install -y cmake
    sudo apt-get install -y ninja-build
    sudo apt-get install -y rsync
    sudo apt-get install -y bmap-tools
    sudo apt-get install -y dosfstools
else
    echo "Please manually install required software for Yocto "dunfell" branch and layers."
fi
