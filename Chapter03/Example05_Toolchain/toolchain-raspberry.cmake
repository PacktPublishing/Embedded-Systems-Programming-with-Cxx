# Toolchain compilers
set(CMAKE_C_COMPILER /usr/bin/arm-linux-gnueabihf-gcc)
set(CMAKE_CXX_COMPILER /usr/bin/arm-linux-gnueabihf-g++)

# Toolchain compiler flags
set(CMAKE_C_FLAGS "-march=armv7-a -mfpu=vfp -mfloat-abi=hard")
set(CMAKE_CXX_FLAGS "-march=armv7-a -mfpu=vfp -mfloat-abi=hard")