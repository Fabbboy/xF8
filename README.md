# What is xF8?
xF8 is a "CPU emulator". It is still in development. The goal is to learn more about CPU's, Memory and Assembly. I also want to  Design a CPU by myself, so I want to learn what's happening behind the scenes.

## Goals
- [x] Memory => Writing and Reading from Memory
- [x] Registers => 8-Bit Registers:  eax, ebx, ecx, edx, esi, edi, ebp, esp
- [ ] Assembly language "xF8" => Writing a simple Assembly language for the CPU
- [ ] Loading programs => Loading programs from a file and executing them
- [ ] Visualisation => Visualising the CPU and Memory using OpenGL with GLFW or something similar

## How to build
- Clone the repository
```
git clone https://github.com/Fabbboy/xF8.git
```
- Create build directory
```
mkdir build
```
- Change directory
```
cd build
```
- Build
```
cmake ..
make
./xF8
```

## Example
The CPP code in main.cpp:
```cpp
    reg.write(eax, 'a');
    mem.write(0x0000, reg.read(eax));
    mem.write(0x0001, mem.read(0x0000));
    std::cout << mem.read(0x0001) << std::endl;
```
Corresponding xF8 Assembly code:
```
    mov: eax, 'a';
    mov: [0x0000], eax;
    mov: [0x0001], [0x0000];
    print: [0x0001];
```

