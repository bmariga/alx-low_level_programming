#include <stdio.h>
#include <string.h>

unsigned int binary_to_unsigned_int(const char *binary_str) {
    // Get the length of the input string
    int len = strlen(binary_str);

    // Initialize the result to 0
    unsigned int result = 0;

    // Loop through each character in the binary string
    for (int i = 0; i < len; i++) {
        // Shift the result to the left by 1
        result <<= 1;

        // Check if the current character is '1', if so, set the least significant bit to 1
        if (binary_str[i] == '1') {
            result |= 1;
        }
    }

    return result;
}

