# Embedded Systems Programming with C++

This is part of the code [repository](https://github.com/PacktPublishing/Embedded-Systems-Programming-with-Cxx) for<br>
**Embedded Systems Programming with C++** by [Packt Publishing](https://www.packtpub.com/)<br>
**Learning from scratch to configure, develop, test and monitor.**

Files related to **Example04** (Writing Protobuf message (and generating sources through command line))
<br>From **Chapter05** (Manipulating data in a C++ embedded system).

## Files

* `example_source.cpp`: C++ source file
* `example_model.proto`: Protobuf source file
* `CMakeLists.txt`: CMake source file
* `conanfile.txt`: Conan source file
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01_install_software.sh`: Script to install required software
* `step02_compile_proto_file.sh.`: Script generate the Protobuf source files
* `step03_compile_the_sources.sh.`: Script to compile all source code
* `step04_execute_the_binary.sh`: Script to execute the binary
* `step05_inspect_the_output.sh`: Script to inspect the output (`example_output.bin`)
* `.gitignore`: List of files and folders that should be ignored by Git
* `LICENSE`: License file

## Instructions

1. Run `source step01_install_software.sh` to install the required software
2. Run `source step02_compile_proto_file.sh.` to generate Protobuf source files (`example_model.pb.cc` and `example_model.pb.h`)
3. Run `source step03_compile_the_sources.sh.` to compile the sources using GCC
4. Run `source step04_execute_the_binary.sh` to execute the binary
5. Run `source step05_inspect_the_output.sh` to decode the generated Protobuf message file (`example_output.bin`)

## Recommendations

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Try changes to the `example_source.cpp`, build and run the project again, then inspect the output with `step05_inspect_the_output.sh`.

Check the software versions in your system by running: `gcc --version` and `protoc --version`.

## License

This project is licensed under MIT License. Check the [LICENSE](LICENSE) file for more details.

## Get to Know the Author

[Heitor Peralles](mailto:heitorgp@gmail.com) is a cross-platform C++ developer with more than 20 years of experience. He started working with embedded systems in 2009 and has known C++ since 2001. He has been programming since the age 12 and describes himself as passionate about the art of computer programming. He was responsible for several C++ projects related to IoTs, Digital TVs, surveillance cameras, healthcare equipment, POS devices, and computer peripherals, among ARM, MIPS, and X86 devices. He also created desktop and backend solutions, targeting Linux, Windows, MacOS, FreeBSD, zOS, GCP, AWS, and Azure DevOps. Heitor holds a Computer Science BSc. degree, and he also plays with Cryptography, AI, Computer Graphics, Music, Literature and Filming.
