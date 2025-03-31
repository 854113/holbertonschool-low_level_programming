#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int row, col, result;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');

		for (col = 1; col < 10; col++)
		{
			_putchar(',');
			_putchar(' ');

			result = row * col;

			if (result < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}

