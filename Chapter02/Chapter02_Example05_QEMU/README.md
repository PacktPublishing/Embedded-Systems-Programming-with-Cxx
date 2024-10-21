# Embedded Systems Programming with C++

Files related to Example05 (**Setting QEMU and compiling C++ on the Virtual Machine**) from Chapter02.

## Files

* `example_source.cpp:` C++ source file
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01_install_local_software.sh`: Script to install required software for the system
* `step02_create_qemu_image.sh`: Script to create QEMU image
* `step03_boot_qemu_from_iso.sh`: Script to boot QEMU machine with the ISO file
* `step04_run_qemu_machine.sh`: Script to run QEMU machine
* `step05_install_qemu_software.sh`: Script to install required software for QEMU machine
* `step06_compile_the_source.sh:` Script to compile the source
* `step07_execute_the_binary.sh:` Script to execute the binary 
* `.gitignore:` List of files and folders that should be ignored by Git

## Instructions

Before start you must download an Ubuntu ISO from [ubuntu.com](https://www.ubuntu.com).

1. Run `step01_install_local_software.sh` to install the required dependencies
2. Run `step02_create_qemu_image.sh` to create QEMU image
3. Run `step03_boot_qemu_from_iso.sh` to boot QEMU machine with the ISO file
4. Run `step04_run_qemu_machine.sh` to run QEMU machine
5. Run `step05_install_qemu_software.sh` to install the required dependencies (inside QEMU machine)
6. Run `step06_compile_the_source.sh` to generate the binary using GCC (inside QEMU machine)
7. Run `step07_execute_the_binary.sh` to execute the binary (inside QEMU machine)

## Recommendations

Change `step03_boot_qemu_from_iso.sh` to use your ISO file.

After completing steps 2 and 3 once, you can always start from `step04_run_qemu_machine.sh`.

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Check the software versions in your system by running: `gcc --version` and `qemu-system-x86_64 --version`. Remember to run `gcc --version` inside the QEMU virtual machine.
