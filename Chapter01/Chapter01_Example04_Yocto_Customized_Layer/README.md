# Embedded Systems Programming with C++

Files related to Example04 (**Creating an Yocto distribution with a custom App layer**) from Chapter01.

## Files

* `example_source.cpp:` C++ source file
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
* `step07_create_custom_app_layer.sh`: Script to create a new layer
* `step08_copy_custom_app_recipe_file.sh`: Script to copy example_app.bb file
* `step09_add_layer_custom_app.sh`: Script to add the example app layer
* `step10_add_custom_app.sh`: Script append add example app to the distribution
* `step11_build_the_image.sh`: Script to build the image

## Instructions

### Building for Jetson Nano:

1. Run `step01_install_software.sh` to install the required dependencies
2. Run `step02_clone_poky.sh` to clone `poky` project
3. Run `step03a_clone_jetson_layer.sh` to clone the hardware layer for Jetson Nano
4. Run `step04_build_environment.sh` to build the environment
5. Run `step05a_set_conf_jetson.sh` to configure the build for Jetson Nano
6. Run `step06a_add_layer_jetson.sh` to add Jetson Nano hardware layer
7. Run `step07_create_custom_app_layer.sh` to create the example layer
7. Run `step08_copy_custom_app_recipe_file.sh` to install the example_app.bb file
7. Run `step09_add_layer_custom_app.sh` to add the example layer
7. Run `step10_add_custom_app.sh` to include the example app to the build
8. Run `step11_build_the_image.sh` to build the image

### Building for Raspberry Pi:

1. Run `step01_install_software.sh` to install the required dependencies
2. Run `step02_clone_poky.sh` to clone `poky` project
3. Run `step03b_clone_raspberry_layer.sh` to clone the hardware layer for Raspberry Pi
4. Run `step04_build_environment.sh` to build the environment
5. Run `step05b_set_conf_raspberry.sh` to configure the build for Raspberry Pi
6. Run `step06b_add_layer_raspberry.sh` to add Raspberry Pi hardware layer
7. Run `step07_create_custom_app_layer.sh` to create the example layer
7. Run `step08_copy_custom_app_recipe_file.sh` to install the example_app.bb file
7. Run `step09_add_layer_custom_app.sh` to add the example layer
7. Run `step10_add_custom_app.sh` to include the example app to the build
8. Run `step11_build_the_image.sh` to build the image

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Change `step11_build_the_image.sh` by replacing `core-image-minimal` with `core-image-base`, `core-image-container` or `core-image-dev` to experience different set ups.

Check Yocto documentation system requirements to ensure that your environment is elegible and correctly set up.
