#include <iostream>
#include "Emulator/Memory.h"
#include "Emulator/Registers.h"

int main() {

    Memory mem(0x0005);
    Registers reg;

    //load value A into register eax
    reg.write(eax, 'a');
    //write register eax to memory location 0x0000
    mem.write(0x0000, reg.read(eax));
    //load memory location 0x0000 into memory location 0x0001
    mem.write(0x0001, mem.read(0x0000));
    //get memory location 0x0001 and print it
    std::cout << mem.read(0x0001) << std::endl;

    reg.mapRegisters();
    mem.mapMemory();

    /*corresponding xf8 assembly:
    ld: eax, 0x0A;
    mov: 0x0000, eax;
    mov: 0x0001, 0x0000
    call: print, 0x0001*/

    return 0;
}
