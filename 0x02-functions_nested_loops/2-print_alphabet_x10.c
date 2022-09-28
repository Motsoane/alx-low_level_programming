#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10x the alphabets
 * Return 0
 */

void print_alphabet_x10(void)

{
	int z;
	char c;

	for (z = 0; z < 10; ++z)

	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
