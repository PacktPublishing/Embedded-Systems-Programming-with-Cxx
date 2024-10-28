# Embedded Systems Programming with C++

Files related to Example02 (**Creating an Yocto distribution with CMake**) from Chapter01.

## Files

* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01_install_software.sh`: Script to install required software
* `step02_clone_poky.sh`: Script to clone `poky` project
* `step03a_clone_jetson_layer.sh`: Script to clone the hardware layer for Jetson Nano
* `step03b_clone_raspberry_layer.sh`: Script to clone the hardware layer for Raspberry Pi
* `step04_build_environment.sh`: Script to build the environment
* `step05a_set_conf_jetson.sh`: Script to configure the build for Jetson Nano
* `step05b_set_conf_raspberry.sh`: Script to configure the build for Raspberry Pi
* `step06a_add_layer_jetson.sh`: Script to add Jetson Nano hardware layer
* `step06b_add_layer_raspberry.sh`: Script to add Raspberry Pi hardware layer
* `step07_add_cmake.sh`: Script append add CMake app to the distribution
* `step08_build_the_image.sh`: Script to build the image

## Instructions

### Building for Jetson Nano:

1. Run `source step01_install_software.sh` to install the required dependencies
2. Run `source step02_clone_poky.sh` to clone `poky` project
3. Run `source step03a_clone_jetson_layer.sh` to clone the hardware layer for Jetson Nano
4. Run `source step04_build_environment.sh` to build the environment
5. Run `source step05a_set_conf_jetson.sh` to configure the build for Jetson Nano
6. Run `source step06a_add_layer_jetson.sh` to add Jetson Nano hardware layer
7. Run `source step07_add_cmake.sh` to include CMake to the build
8. Run `source step08_build_the_image.sh` to build the image

### Building for Raspberry Pi:

1. Run `source step01_install_software.sh` to install the required dependencies
2. Run `source step02_clone_poky.sh` to clone `poky` project
3. Run `source step03b_clone_raspberry_layer.sh` to clone the hardware layer for Raspberry Pi
4. Run `source step04_build_environment.sh` to build the environment
5. Run `source step05b_set_conf_raspberry.sh` to configure the build for Raspberry Pi
6. Run `source step06b_add_layer_raspberry.sh` to add Raspberry Pi hardware layer
7. Run `source step07_add_cmake.sh` to include CMake to the build
8. Run `source step08_build_the_image.sh` to build the image

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Change `step08_build_the_image.sh` by replacing `core-image-minimal` with `core-image-base`, `core-image-container` or `core-image-dev` to experience different set ups.

Check Yocto documentation system requirements to ensure that your environment is elegible and correctly set up.

Similar to `step07_add_cmake.sh`, change `poky/build/conf/local.conf` to add other applications than CMake.

After finishing the process, your image will be placed in `poky/build/tmp/deploy/images/`. Copy it to an SD card, and use it to flash your board.

## License

This project is licensed under MIT License. Check the [LICENSE](LICENSE) file for more details.

## Get to Know the Author

[Heitor Peralles](mailto:heitorgp@gmail.com) is a cross-platform C++ developer with more than 20 years of experience. He started working with embedded systems in 2009 and has known C++ since 2001. He has been programming since the age 12 and describes himself as passionate about the art of computer programming. 

He was responsible for several C++ projects related to IoTs, Digital TVs, surveillance cameras, healthcare equipment, POS devices, and computer peripherals, among ARM, MIPS, and X86 devices. He also created desktop and backend solutions, targeting Linux, Windows, MacOS, FreeBSD, zOS, GCP, AWS, and Azure DevOps. Heitor holds a Computer Science BSc. degree, and he also plays with Cryptography, AI, Computer Graphics, Music, Literature and Filming.
