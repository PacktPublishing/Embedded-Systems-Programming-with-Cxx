# Embedded Systems Programming with C++

This is part of the code [repository](https://github.com/PacktPublishing/Embedded-Systems-Programming-with-Cxx) for<br>
**Embedded Systems Programming with C++** by [Packt Publishing](https://www.packtpub.com/)<br>
**Learning from scratch to configure, develop, test and monitor.**

Files related to **Example05** (Setting QEMU and compiling C++ on the Virtual Machine)
<br>From **Chapter02** (Setting up the C++ cross-compilation environment).

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
* `LICENSE`: License file

## Instructions

Before start you must download an Ubuntu ISO from [ubuntu.com](https://www.ubuntu.com).

1. Run `source step01_install_local_software.sh` to install the required dependencies
2. Run `source step02_create_qemu_image.sh` to create QEMU image
3. Run `source step03_boot_qemu_from_iso.sh` to boot QEMU machine with the ISO file
4. Run `source step04_run_qemu_machine.sh` to run QEMU machine
5. Run `source step05_install_qemu_software.sh` to install the required dependencies (inside QEMU machine)
6. Run `source step06_compile_the_source.sh` to generate the binary using GCC (inside QEMU machine)
7. Run `source step07_execute_the_binary.sh` to execute the binary (inside QEMU machine)

## Recommendations

Change `step03_boot_qemu_from_iso.sh` to use your ISO file.

After completing steps 2 and 3 once, you can always start from `step04_run_qemu_machine.sh`.

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Check the software versions in your system by running: `gcc --version` and `qemu-system-x86_64 --version`. Remember to run `gcc --version` inside the QEMU virtual machine.

## License

This project is licensed under MIT License. Check the [LICENSE](LICENSE) file for more details.

## Get to Know the Author

[Heitor Peralles](mailto:heitorgp@gmail.com) is a cross-platform C++ developer with more than 20 years of experience. He started working with embedded systems in 2009 and has known C++ since 2001. He has been programming since the age 12 and describes himself as passionate about the art of computer programming. He was responsible for several C++ projects related to IoTs, Digital TVs, surveillance cameras, healthcare equipment, POS devices, and computer peripherals, among ARM, MIPS, and X86 devices. He also created desktop and backend solutions, targeting Linux, Windows, MacOS, FreeBSD, zOS, GCP, AWS, and Azure DevOps. Heitor holds a Computer Science BSc. degree, and he also plays with Cryptography, AI, Computer Graphics, Music, Literature and Filming.
