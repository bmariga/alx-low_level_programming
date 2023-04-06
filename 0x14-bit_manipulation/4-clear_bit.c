#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
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

	// Bitwise AND operation with the complement of the mask to set the bit at the index to 0
	*n = (*n & ~mask);

	return 1;
}

