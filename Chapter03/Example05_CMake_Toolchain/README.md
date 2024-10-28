# Embedded Systems Programming with C++

Files related to Example05 (**CMake C++ project with Glog using Conan, Ninja and ARM Toolchain**) from Chapter03.

## Files

* `example_source.cpp`: C++ source file
* `CMakeLists.txt`: CMake source file
* `toolchain-jetson.cmake`: CMake toolchain file for Jetson Nano
* `toolchain-raspberry.cmake`: CMake toolchain file for Raspbery Pi
* `conanfile.txt`: Conan source file
* `conan-jetson.profile`: Conan profile for Jetson Nano
* `conan-raspberry.profile`: Conan profile for Raspberry Pi
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01a_install_software.sh`: Script to install required software for local build
* `step01b_install_software.sh`: Script to install required software for Jetson Nano build
* `step01c_install_software.sh`: Script to install required software for Raspberry Pi build
* `step02a_install_dependencies_local.sh.`: Script to build and install required dependencies for local build
* `step02b_install_dependencies_jetson.sh.`: Script to build and install required dependencies for Jetson Nano build
* `step02c_install_dependencies_raspberry.sh.`: Script to build and install required dependencies for Raspberry Pi build
* `step03a_generate_build_files_local.sh.`: Script to generate local build files
* `step03b_generate_build_files_jetson.sh.`: Script to generate Jetson Nano build files
* `step03c_generate_build_files_raspberry.sh.`: Script to generate Raspberry Pi build files
* `step04a_build_local_project_local.sh`: Script to build the project locally
* `step04b_build_jetson_project.sh`: Script to build the project for Jetson Nano
* `step04c_build_raspberry_project.sh`: Script to build the project for Raspberry Pi
* `step05a_execute_local_binary.sh`: Script to execute the local binary
* `step05b_validate_jetson_binary.sh`: Script to validate Jetson Nano binary
* `step05c_validate_raspberry_binary.sh`: Script to validate Raspberry Pi binary
* `.gitignore`: List of files and folders that should be ignored by Git

## Instructions

### Building locally:

1. Run `source step01a_install_software.sh` to install the required software
2. Run `source step02a_install_dependencies_local.sh.` to install Conan dependencies
3. Run `source step03a_generate_build_files_local.sh.` to generate the build files using CMake
4. Run `source step04a_build_local_project_local.sh` to build the project using Make (default CMake build system)
5. Run `source step05a_execute_local_binary.sh` to execute the binary

### Building for Jetson Nano:

1. Run `source step01b_install_software.sh` to install the required software
2. Run `source step02b_install_dependencies_jetson.sh.` to install Conan dependencies
3. Run `source step03b_generate_build_files_jetson.sh.` to generate the build files using CMake
4. Run `source step04b_build_jetson_project.sh` to build the project using Ninja
5. Run `source step05b_validate_jetson_binary.sh` to validate the binary

### Building for Raspberry Pi:

1. Run `source step01c_install_software.sh` to install the required software
2. Run `source step02c_install_dependencies_raspberry.sh.` to install Conan dependencies
3. Run `source step03c_generate_build_files_raspberry.sh.` to generate the build files using CMake
4. Run `source step04c_build_raspberry_project.sh` to build the project using Ninja
5. Run `source step05c_validate_raspberry_binary.sh` to validate the binary

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process before building for a different platform.

Analyze the commands written in the `.sh` files.

Check the software versions in your system by running: `cmake --version`, `gcc --version`, `conan --version`, `ninja --version`.

You can also check the ARM GCC version by calling `gcc-aarch64-linux-gnu --version` and `gcc-arm-linux-gnueabihf --version` inside the Toolchain installation directory (same specified for `CMAKE_C_COMPILER` and `CMAKE_CXX_COMPILER`). For example: `/usr/bin/arm-linux-gnueabihf-gcc --version` and `/usr/bin/aarch64-linux-gnu-gcc --version`.

You may need to change CMake `.cmake` files with the correct Toolchain paths for `CMAKE_C_COMPILER` and `CMAKE_CXX_COMPILER`. To find out Toolchain paths in Debian-based Linux distributions you can run: `dpkg -L g++-arm-linux-gnueabihf | grep bin` and `dpkg -L g++-aarch64-linux-gnu | grep bin`. You may need to change Conan `.profile` files as well, by filling `CC` and `CXX` fields from `buildenv` section with the correct Toolchain path.

## License

This project is licensed under MIT License. Check the [LICENSE](LICENSE) file for more details.

## Get to Know the Author

[Heitor Peralles](mailto:heitorgp@gmail.com) is a cross-platform C++ developer with more than 20 years of experience. He started working with embedded systems in 2009 and has known C++ since 2001. He has been programming since the age 12 and describes himself as passionate about the art of computer programming. 

He was responsible for several C++ projects related to IoTs, Digital TVs, surveillance cameras, healthcare equipment, POS devices, and computer peripherals, among ARM, MIPS, and X86 devices. He also created desktop and backend solutions, targeting Linux, Windows, MacOS, FreeBSD, zOS, GCP, AWS, and Azure DevOps. Heitor holds a Computer Science BSc. degree, and he also plays with Cryptography, AI, Computer Graphics, Music, Literature and Filming.
