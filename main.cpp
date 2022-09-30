#include <iostream>
#include "Emulator/Memory.h"
#include "Emulator/Registers.h"
#include "Emulator/Logic.h"

int main() {

    Memory mem(5);
    Registers reg;
    Logic logic(&reg, &mem);

    reg.write(eax, 'a');
    reg.write(ebx, 'b');
    reg.write(ecx, 'c');
    logic.l_add(eax,23);
    mem.write(4, reg.read(eax));


    reg.mapRegisters();
    mem.mapMemory();



    return 0;
}
