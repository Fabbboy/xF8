
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
        //print location: value. For example: 0x0000: 0x0A
        std::cout << "Location: " << i << ": " << memory[i] << std::endl;
    }
}
