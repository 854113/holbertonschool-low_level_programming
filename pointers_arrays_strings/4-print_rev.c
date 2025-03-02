#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int l = 0;
	int i = 0;

	while (s[i])
	{
		i++;
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

