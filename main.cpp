#include <iostream>
#include "Emulator/Memory.h"
#include "Emulator/Registers.h"

int main() {

    Memory mem(5);
    Registers reg;

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


    reg.mapRegisters();
    mem.mapMemory();

    /*corresponding xf8 assembly:
    ld: eax, 0x0A;
    mov: 0x0000, eax;
    mov: 0x0001, 0x0000
    call: print, 0x0001*/

    return 0;
}
