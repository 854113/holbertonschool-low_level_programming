#include "main.h"

/**
 * print_diagonal - Writes a diagonal line using \ character.
 *
 * @n: the number of \.
 */

void print_diagonal(int n)
{
	int l;
	int spaces;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (spaces = 0; spaces < l; spaces++)
				_putchar(' ');
			_putchar('\\');

			if (l == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

