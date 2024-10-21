#!/bin/bash

qemu-system-arm -boot d -cdrom ubuntu-20.04.6-desktop-amd64.iso -hda my_image.qcow2 -m 2048
