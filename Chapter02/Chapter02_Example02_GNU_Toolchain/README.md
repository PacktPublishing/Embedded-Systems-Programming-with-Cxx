# Embedded Systems Programming with C++

Files related to Example01 (**Compiling C++ with GNU ARM Toolchain**) from Chapter02.

## Files

* `example_source.cpp:` C++ source file
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01a_install_software.sh`: Script to install required software for Jetson Nano compilation
* `step01b_install_software.sh`: Script to install required software for Raspberry Pi compilation
* `step02a_compile_for_jetson.sh:` Script to compile the source for Jetson Nano
* `step02b_compile_for_raspberry.sh:` Script to compile the source for Raspberry Pi
* `step03a_validate_jetson_binary.sh:` Script to validate Jetson Nano binary
* `step03b_validate_raspberry_binary.sh:` Script to validate Raspberry Pi binary
* `.gitignore:` List of files and folders that should be ignored by Git

### Building for Jetson Nano:

1. Run `step01a_install_software_jetson.sh` to install the required software
4. Run `step02a_compile_for_jetson.sh` to compile the source using GNU ARM Toolchain
5. Run `step03a_validate_the_binary.sh` to validate the binary

### Building for Raspberry Pi:

1. Run `step01b_install_software_raspberry.sh` to install the required software
4. Run `step02b_compile_for_raspberry.sh` to compile the source using GNU ARM Toolchain
5. Run `step03b_validate_the_binary.sh` to validate the binary

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process before building for a different platform.

Analyze the commands written in the `.sh` files.

Check the ARM GCC version in your system by calling `gcc-aarch64-linux-gnu --version` and `gcc-arm-linux-gnueabihf --version` inside the Toolchain installation directory. For example: `/usr/bin/arm-linux-gnueabihf-gcc --version` and `/usr/bin/aarch64-linux-gnu-gcc --version`.

To find out Toolchain paths in Debian-based Linux distributions you can run: `dpkg -L g++-arm-linux-gnueabihf | grep bin` and `dpkg -L g++-aarch64-linux-gnu | grep bin`.
