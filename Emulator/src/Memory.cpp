
#include <iostream>
#include "../Memory.h"

Memory::Memory(uint16_t size) {
    this->size = size;
    memory = new uint8_t[size];
}

Memory::~Memory() {
    delete[] memory;
}

uint8_t Memory::read(uint16_t address) {
    return memory[address];
}

void Memory::write(uint16_t address, uint8_t value) {
    memory[address] = value;
}

void Memory::mapMemory() {
    for (int i = 0; i < size; i++) {
        std::cout << "Memory location " << i << ": " << memory[i] << std::endl;
    }
}
