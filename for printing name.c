#include "../address_map_arm.h"
#include <stdio.h>

int main(void)
{
    volatile int * HEX3_HEX0_ptr = (int *) HEX3_HEX0_BASE;

    // 0b0011 = 'A'
    // 0b1100 = 'M'
    // 0b1001 = 'I'
    // 0b0100 = 'T'
    int name[] = {0b0011, 0b1100, 0b1001, 0b0100};

    for (int i = 0; i < 4; i++) {
        *HEX3_HEX0_ptr = name[i] << (8 * i);
    }

    return 0;
}
