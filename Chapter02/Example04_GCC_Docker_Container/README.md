# Embedded Systems Programming with C++

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
