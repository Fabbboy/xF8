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
1. Load value in and from Registers
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
   Memory and Register map:
```
    Register 0: a
    Register 1: �
    Register 2: �
    Register 3: �
    Register 4: �
    Register 5: �
    Register 6: �
    Register 7: �
    Location: 0: a
    Location: 1: a
    Location: 2: �
    Location: 3: �
    Location: 4: �
```
2. Hello example
```cpp
    reg.write(eax, 'h');
    mem.write(0x0000, reg.read(eax));
    reg.write(eax, 'e');
    mem.write(0x0001, reg.read(eax));
    reg.write(eax, 'l');
    mem.write(0x0002, reg.read(eax));
    reg.write(eax, 'l');
    mem.write(0x0003, reg.read(eax));
    reg.write(eax, 'o');
    mem.write(0x0004, reg.read(eax));
```
    Corresponding xF8 Assembly code:
```
    mov: eax, 'h';
    mov: [0x0000], eax;
    mov: eax, 'e';
    mov: [0x0001], eax;
    mov: eax, 'l';
    mov: [0x0002], eax;
    mov: eax, 'l';
    mov: [0x0003], eax;
    mov: eax, 'o';
    mov: [0x0004], eax;
```
   Memory and Register map:
```
    Register 0: o
    Register 1: �
    Register 2: �
    Register 3: �
    Register 4: �
    Register 5: �
    Register 6: �
    Register 7: �
    Location: 0: h
    Location: 1: e
    Location: 2: l
    Location: 3: l
    Location: 4: o
```
3. Using multiple registers
```cpp
        reg.write(eax, 'h');
        reg.write(ebx, 'e');
        reg.write(ecx, 'l');
        reg.write(edx, 'l');
        reg.write(esi, 'o');
```
   Corresponding xF8 Assembly code:
```
     mov: eax, 'h';
     mov: ebx, 'e';
     mov: ecx, 'l';
     mov: edx, 'l';
     mov: esi, 'o';
```
Memory and Register map:
```
    Register 0: h
    Register 1: e
    Register 2: l
    Register 3: l
    Register 4: o
    Register 5: �
    Register 6: �
    Register 7: �
```
   
