# Embedded Systems Programming with C++

This is part of the code [repository](https://github.com/PacktPublishing/Embedded-Systems-Programming-with-Cxx) for<br>
**Embedded Systems Programming with C++** by [Packt Publishing](https://www.packtpub.com/)<br>
**Learning from scratch to configure, develop, test and monitor.**

Files related to **Example01** (Compiling C++ with GNU ARM Toolchain)
<br>From **Chapter02** (Setting up the C++ cross-compilation environment).

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
* `LICENSE`: License file

### Building for Jetson Nano:

1. Run `source step01a_install_software_jetson.sh` to install the required software
2. Run `source step02a_compile_for_jetson.sh` to compile the source using GNU ARM Toolchain
3. Run `source step03a_validate_the_binary.sh` to validate the binary

### Building for Raspberry Pi:

1. Run `source step01b_install_software_raspberry.sh` to install the required software
2. Run `source step02b_compile_for_raspberry.sh` to compile the source using GNU ARM Toolchain
3. Run `source step03b_validate_the_binary.sh` to validate the binary

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process before building for a different platform.

Analyze the commands written in the `.sh` files.

Check the ARM GCC version in your system by calling `gcc-aarch64-linux-gnu --version` and `gcc-arm-linux-gnueabihf --version` inside the Toolchain installation directory. For example: `/usr/bin/arm-linux-gnueabihf-gcc --version` and `/usr/bin/aarch64-linux-gnu-gcc --version`.

To find out Toolchain paths in Debian-based Linux distributions you can run: `dpkg -L g++-arm-linux-gnueabihf | grep bin` and `dpkg -L g++-aarch64-linux-gnu | grep bin`.

## License

This project is licensed under MIT License. Check the [LICENSE](LICENSE) file for more details.

## Get to Know the Author

[Heitor Peralles](mailto:heitorgp@gmail.com) is a cross-platform C++ developer with more than 20 years of experience. He started working with embedded systems in 2009 and has known C++ since 2001. He has been programming since the age 12 and describes himself as passionate about the art of computer programming. He was responsible for several C++ projects related to IoTs, Digital TVs, surveillance cameras, healthcare equipment, POS devices, and computer peripherals, among ARM, MIPS, and X86 devices. He also created desktop and backend solutions, targeting Linux, Windows, MacOS, FreeBSD, zOS, GCP, AWS, and Azure DevOps. Heitor holds a Computer Science BSc. degree, and he also plays with Cryptography, AI, Computer Graphics, Music, Literature and Filming.
