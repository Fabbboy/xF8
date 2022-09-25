

#ifndef CPU_REGISTERS_H
#define CPU_REGISTERS_H

//CPU registers

#include <cstdint>

// 8 bit registers
enum Register8 {
    eax, ebx, ecx, edx, esi, edi, ebp, esp
};
class Registers{
public:
    Registers();
    ~Registers();

    uint8_t read(Register8 reg);
    void write(Register8 reg, uint8_t value);

    void mapRegisters();

private:
    //registers
    uint8_t registers[8];
};



#endif //CPU_REGISTERS_H
