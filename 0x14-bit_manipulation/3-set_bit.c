#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer to an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
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

	// Bitwise OR operation to set the bit at the index to 1
	*n = (*n | mask);

	return 1;
}

