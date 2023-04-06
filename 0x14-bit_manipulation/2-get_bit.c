#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit, or -1 if index is invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	// Check if index is valid
	if (index >= sizeof(unsigned long int) * 8)
	{
		printf("Error: Invalid bit index\n");
		return -1;
	}

	// Shift the mask to the left by the index
	mask = mask << index;

	// Bitwise AND operation to extract the value of the bit at the index
	int bit = (n & mask) >> index;

	return bit;
}

