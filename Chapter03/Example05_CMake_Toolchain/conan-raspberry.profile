[settings]
os=Linux
arch=armv7
compiler=gcc
compiler.version=11
compiler.libcxx=libstdc++11
build_type=Release

[conf]
tools.build:cxxflags=["-march=armv7-a", "-mfpu=vfp", "-mfloat-abi=hard"]
tools.build:cflags=["-march=armv7-a", "-mfpu=vfp", "-mfloat-abi=hard"]

[buildenv]
CC=/usr/bin/arm-linux-gnueabihf-gcc
CXX=/usr/bin/arm-linux-gnueabihf-g++
