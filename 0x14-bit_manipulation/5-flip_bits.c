#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: num one.
 * @m: num two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int control = 0;

	// Count the number of set bits in the XOR result
	while (xor_result)
	{
		// Use bitwise AND operation to check if the least significant bit is set
		if (xor_result & 1)
			control++;
		// Right shift XOR result to move to the next bit
		xor_result >>= 1;
	}

	return control;
}

