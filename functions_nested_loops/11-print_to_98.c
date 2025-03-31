#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Outputs all natural numbers from the given input to 98,
 *		arranged sequentially, separated by a coma and a space.
 *
 * @n: The starting number of the count.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}

