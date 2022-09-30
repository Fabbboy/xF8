

#ifndef XF8_LOGIC_H
#define XF8_LOGIC_H

#include "Registers.h"
#include "Memory.h"

class Logic {
public:
    Logic(Registers *registers, Memory *memory);
    ~Logic();

    //math
    void l_add(Register8 reg, uint8_t value); // adds value to register
    void l_sub(Register8 reg, uint8_t value); // subtracts value from register
    void l_mul(Register8 reg, uint8_t value); // multiplies register by value
    void l_div(Register8 reg, uint8_t value); // divides register by value
    void l_add(uint8_t address, uint8_t value); // adds value to memory location
    void l_sub(uint8_t address, uint8_t value); // subtracts value from memory location
    void l_mul(uint8_t address, uint8_t value); // multiplies memory location by value
    void l_div(uint8_t address, uint8_t value); // divides memory location by value
    void l_add(Register8 reg, Register8 reg2); // adds register to register
    void l_sub(Register8 reg, Register8 reg2); // subtracts register from register
    void l_mul(Register8 reg, Register8 reg2); // multiplies register by register
    void l_div(Register8 reg, Register8 reg2); // divides register by register


    Registers *_registers;
    Memory *_memory;
};

#endif //XF8_LOGIC_H
