#!/bin/bash

cd build-raspberry
readelf -h example_binary | grep Machine
