#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 *						followed by a new line.
 *
 * @a: Array of integers.
 * @n: The number of elements to print.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}

