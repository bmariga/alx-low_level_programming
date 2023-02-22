#include "main.h"

/**
 * print_alphabet - function prints the alphabets in lowercase
 *
 * Return: always (0) success
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
