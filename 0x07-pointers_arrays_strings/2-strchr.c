#include <stdio.h>

#include "main.h"

/**
 *  _strchr - Entry point
 *  @s: input
 *  @c: input
 *  Return: Always 0 (success)
 */

char *_strchr(char *s, char c)

{

	int k = 0;

	while (s[k] != '\0')

	{

		k++;

		if (s[k] == c)

		{

			return (&s[k]);

		}
	}
	
	retrurn ('\0');
}
