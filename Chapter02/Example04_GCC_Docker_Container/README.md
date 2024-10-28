# Embedded Systems Programming with C++

This is part of the code [repository](https://github.com/PacktPublishing/Embedded-Systems-Programming-with-Cxx) for<br>
**Embedded Systems Programming with C++** by [Packt Publishing](https://www.packtpub.com/)<br>
**Learning from scratch to configure, develop, test and monitor.**

Files related to Example04 (**Setting Docker and compiling C++ inside the Container**) from Chapter02.

## Files

* `example_source.cpp:` C++ source file
* `step00_clean_build_files.sh`: Script to clean the previous build
* `step01_build_docker_container.sh`: Script to build the Docker container
* `step02_run_docker_container.sh`: Script to execute the Docker container
* `step03_compile_the_source.sh:` Script to compile the source
* `step04_execute_the_binary.sh:` Script to execute the binary
* `.gitignore:` List of files and folders that should be ignored by Git

## Instructions

Before start you must install Docker from [docker.com](https://www.docker.com).

1. Run `source step01_build_docker_container.sh` to build Docker container
2. Run `source step02_run_docker_container.sh` to run Docker container
3. Run `source step03_compile_the_source.sh` to generate the binary using GCC (inside Docker container)
4. Run `source step04_execute_the_binary.sh` to execute the binary (inside Docker container)

## Recommendations

If you don't change your `Dockerfile` neither delete Docker cache, you just need to run `step01_build_docker_container.sh` once.

Run `step00_clean_build_files.sh` to completely clean the build process if you want to start it again from the scratch.

Analyze the commands written in the `.sh` files.

Check the software versions in your system by running: `gcc --version` and `docker --version`. Remember to run `gcc --version` inside the Docker container.

## License

This project is licensed under MIT License. Check the [LICENSE](LICENSE) file for more details.

## Get to Know the Author

[Heitor Peralles](mailto:heitorgp@gmail.com) is a cross-platform C++ developer with more than 20 years of experience. He started working with embedded systems in 2009 and has known C++ since 2001. He has been programming since the age 12 and describes himself as passionate about the art of computer programming. He was responsible for several C++ projects related to IoTs, Digital TVs, surveillance cameras, healthcare equipment, POS devices, and computer peripherals, among ARM, MIPS, and X86 devices. He also created desktop and backend solutions, targeting Linux, Windows, MacOS, FreeBSD, zOS, GCP, AWS, and Azure DevOps. Heitor holds a Computer Science BSc. degree, and he also plays with Cryptography, AI, Computer Graphics, Music, Literature and Filming.
