# Embedded Systems Programming with C++

Files related to Example01 (**CMake C++ project**) from Chapter03.

## Files

* `example_source.cpp`: C++ source file
* `CMakeLists.txt`: CMake source file
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01_install_software.sh`: Script to install required software
* `step02_generate_build_files.sh.`: Script to generate build files
* `step03_build_the_project.sh`: Script to build the project
* `step04_execute_the_binary.sh`: Script to execute the binary
* `.gitignore`: List of files and folders that should be ignored by Git

## Instructions

1. Run `source step01_install_software.sh` to install the required dependencies
2. Run `source step02_generate_build_files.sh.` to generate the build files using CMake
3. Run `source step03_build_the_project.sh` to build the project using Make (default CMake build system)
4. Run `source step04_execute_the_binary.sh` to execute the binary

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Check the software versions in your system by running: `gcc --version`, `cmake --version` and `make --version`.
