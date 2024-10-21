# Embedded Systems Programming with C++

Files related to Example01 (**Compiling C++ natively with GCC**) from Chapter02.

## Files

* `example_source.cpp:` C++ source file
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01_install_software.sh`: Script to install required software
* `step02_compile_source.sh:` Script to compile the source
* `step03_execute_the_binary.sh:` Script to execute the binary
* `.gitignore:` List of files and folders that should be ignored by Git

## Instructions

1. Run `step01_install_software.sh` to install the required dependencies
2. Run `step02_compile_source.sh` to generate the binary using GCC
3. Run `step03_execute_the_binary.sh` to execute the binary

**Optional:** Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

## Recommendations

Analyze the commands written in the `.sh` files.

Check the software versions in your system by running `gcc --version`.
