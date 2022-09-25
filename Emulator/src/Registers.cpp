
#include <iostream>
#include "../Registers.h"

Registers::Registers() {
    //initialize registers to 0
    for (int i = 0; i < 8; i++) {
        registers[i] = 0;
    }
}

uint8_t Registers::read(Register8 reg) {
    return registers[reg];
}

void Registers::write(Register8 reg, uint8_t value) {
    registers[reg] = value;
}

void Registers::mapRegisters() {
    for (int i = 0; i < 8; i++) {
        std::cout << "Register " << i << ": " << registers[i] << std::endl;
    }
}

Registers::~Registers() = default;