
#include "../Logic.h"

Logic::Logic(Registers *registers, Memory *memory) {
    this->_registers = registers;
    this->_memory = memory;
}

Logic::~Logic() = default;

void Logic::l_add(Register8 reg, uint8_t value) {
    _registers->write(reg, _registers->read(reg) + value);
}

void Logic::l_sub(Register8 reg, uint8_t value) {
    _registers->write(reg, _registers->read(reg) - value);
}

void Logic::l_mul(Register8 reg, uint8_t value) {
    _registers->write(reg, _registers->read(reg) * value);
}

void Logic::l_div(Register8 reg, uint8_t value) {
    _registers->write(reg, _registers->read(reg) / value);
}

void Logic::l_add(uint8_t address, uint8_t value) {
    _memory->write(address, _memory->read(address) + value);
}

void Logic::l_sub(uint8_t address, uint8_t value) {
    _memory->write(address, _memory->read(address) - value);
}

void Logic::l_mul(uint8_t address, uint8_t value) {
    _memory->write(address, _memory->read(address) * value);
}

void Logic::l_div(uint8_t address, uint8_t value) {
    _memory->write(address, _memory->read(address) / value);
}

void Logic::l_add(Register8 reg, Register8 reg2) {
    _registers->write(reg, _registers->read(reg) + _registers->read(reg2));
}

void Logic::l_sub(Register8 reg, Register8 reg2) {
    _registers->write(reg, _registers->read(reg) - _registers->read(reg2));
}

void Logic::l_mul(Register8 reg, Register8 reg2) {
    _registers->write(reg, _registers->read(reg) * _registers->read(reg2));
}

void Logic::l_div(Register8 reg, Register8 reg2) {
    _registers->write(reg, _registers->read(reg) / _registers->read(reg2));
}
