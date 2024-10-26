# Embedded Systems Programming with C++

Files related to Example03 (**CMake C++ project with Glog project using Conan**) from Chapter03.

## Files

* `example_source.cpp`: C++ source file
* `CMakeLists.txt`: CMake source file
* `conanfile.txt`: Conan source file
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01_install_software.sh`: Script to install required software
* `step02_install_dependencies.sh.`: Script build and install required dependencies
* `step03_generate_build_files.sh.`: Script to generate build files
* `step04_build_the_project.sh`: Script to build the project
* `step05_execute_the_binary.sh`: Script to execute the binary
* `.gitignore`: List of files and folders that should be ignored by Git

## Instructions

1. Run `source step01_install_software.sh` to install the required software
2. Run `source step02_install_dependencies.sh.` to install Conan dependencies
3. Run `source step03_generate_build_files.sh.` to generate the build files using CMake
4. Run `source step04_build_the_project.sh` to build the project using Make (default CMake build system)
5. Run `source step05_execute_the_binary.sh` to execute the binary

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Check the software versions in your system by running: `gcc --version`, `cmake --version`, `make --version` and `conan --version`.
