# Embedded Systems Programming with C++

Files related to Example03 (**Compiling C++ with (generated) Yocto Toolchain**) from Chapter02.

## Files

* `example_source.cpp:` C++ source file
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01_install_software.sh`: Script to install required software
* `step02_clone_poky.sh`: Script to clone `poky` project
* `step03a_clone_jetson_layer.sh`: Script to clone the hardware layer for Jetson Nano
* `step03b_clone_raspberry_layer.sh`: Script to clone the hardware layer for Raspberry Pi
* `step04_build_environment.sh`: Script to build the environment
* `step05a_set_machine_jetson.sh`: Script to configure the build for Jetson Nano
* `step05b_set_machine_raspberry.sh`: Script to configure the build for Raspberry Pi
* `step06a_add_layer_jetson.sh`: Script to add Jetson Nano hardware layer
* `step06b_add_layer_raspberry.sh`: Script to add Raspberry Pi hardware layer
* `step07_build_the_toolchain.sh`: Script to build the Yocto Toolchain
* `step08_install_the_toolchain.sh`: Script to build the Yocto Toolchain
* `step09_compile_the_source.sh`: Script to compile the source
* `step10_validate_the_binary.sh`: Script to validate the binary

## Instructions

### Building for Jetson Nano:

1. Run `source step01_install_software.sh` to install the required dependencies
2. Run `source step02_clone_poky.sh` to clone `poky` project
3. Run `source step03a_clone_jetson_layer.sh` to clone the hardware layer for Jetson Nano
4. Run `source step04_build_environment.sh` to build the environment
5. Run `source step05a_set_machine_jetson.sh` to configure the build for Jetson Nano
6. Run `source step06a_add_layer_jetson.sh` to add Jetson Nano hardware layer
7. Run `source step07_build_the_image.sh` to build the Toolchain
8. Run `source step08_install_the_toolchain.sh` to install the Toolchain
9. Run `source step09_compile_the_source.sh` to compile the source using the Toolchain g++
10. Run `source step10_validate_the_binary.sh`: Script to validate the binary

### Building for Raspberry Pi:

1. Run `source step01_install_software.sh` to install the required dependencies
2. Run `source step02_clone_poky.sh` to clone `poky` project
3. Run `source step03b_clone_raspberry_layer.sh` to clone the hardware layer for Raspberry Pi
4. Run `source step04_build_environment.sh` to build the environment
5. Run `source step05b_set_machine_raspberry.sh` to configure the build for Raspberry Pi
6. Run `source step06b_add_layer_raspberry.sh` to add Raspberry Pi hardware layer
7. Run `source step07_build_the_image.sh` to build the Toolchain
8. Run `source step08_install_the_toolchain.sh` to install the Toolchain
9. Run `source step09_compile_the_source.sh` to compile the source using the Toolchain g++
10. Run `source step10_validate_the_binary.sh`: Script to validate the binary

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Check Yocto documentation system requirements to ensure that your environment is elegible and correctly set up.

You may need to change the path or name of the toolchain install script. Check the `step08_install_the_toolchain.sh` in case of errors.

Find out more information about the Toolchain compiler by running `which g++` and `g++ --version`.