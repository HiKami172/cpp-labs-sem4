#include <iostream>
#include "lfsr.h"

unsigned get_bit(uint16_t x,
                 unsigned n) {
    unsigned bit =  (x >> n) ^ ((x >> (n + 1)) << 1);
    return bit;
}

void set_bit(uint16_t * x,
             unsigned n,
             unsigned v) {
     v ? *x |= (1 << n) : *x &= ~(1 << n);
}
void lfsr_calculate(uint16_t *reg) {
    unsigned bit = get_bit(*reg, 0) ^ get_bit(*reg, 2) ^ get_bit(*reg, 3) ^ get_bit(*reg, 5);
    *reg = *reg >> 1;
    set_bit(reg, 15, bit);
}


