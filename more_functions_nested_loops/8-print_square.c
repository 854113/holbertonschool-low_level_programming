#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 *
 * @size: The size of the square.
 */

void print_square(int size)
{
	int hight;
	int width;

	if (size > 0)
	{
		for (hight = 0; hight < size; hight++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (hight == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
