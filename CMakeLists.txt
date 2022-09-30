cmake_minimum_required(VERSION 3.23)
project(xF8)

set(CMAKE_CXX_STANDARD 14)

add_executable(xF8 main.cpp Emulator/Memory.h Emulator/src/Memory.cpp Emulator/Registers.h Emulator/src/Registers.cpp Emulator/Logic.h Emulator/src/Logic.cpp)
