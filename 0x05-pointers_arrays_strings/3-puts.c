#include "main.h"

/**
 * str: pointer to the string to print
 * _puts - prints a string to stdout
 */

void _puts(char *str)

{

	int i;

	for (i = 0; str[i] != '\0'; i++)

	{

		_putchar(str[i]);

	}

	_putchar('\n');

}
