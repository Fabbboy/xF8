

#ifndef CPU_MEMORY_H
#define CPU_MEMORY_H

#include <cstdint>
#include <vector>

struct location {
    uint16_t address;
    uint8_t value;
};

class Memory {
public:
    explicit Memory(uint16_t size);
    ~Memory();

    uint8_t read(uint16_t address);
    void write(uint16_t address, uint8_t value);

    void mapMemory();

private:
    //memory
    uint8_t *memory;
    uint16_t size;
};


#endif //CPU_MEMORY_H
