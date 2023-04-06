#include <stdio.h>

void print_binary(unsigned int num) {
    // Calculate the number of bits in an unsigned int
    int num_bits = sizeof(unsigned int) * 8;

    // Loop through each bit from left to right
    for (int i = num_bits - 1; i >= 0; i--) {
        // Extract the i-th bit using bitwise shift and bitwise AND operations
        unsigned int bit = (num >> i) & 1;

        // Print the bit (0 or 1)
        printf("%u", bit);
    }

    // Print a newline character to end the line
    printf("\n");
}

