#!/bin/bash

/usr/bin/arm-linux-gnueabihf-g++ example_source.cpp -o example_binary -march=armv7-a -mfpu=vfp -mfloat-abi=hard
