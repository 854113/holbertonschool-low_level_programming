#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 *
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int **td;
	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	td = malloc(sizeof(int *) * height);

	if (td == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		td[hgt_i] = malloc(sizeof(int) * width);

		if (td[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(td[hgt_i]);

			free(td);
			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			td[hgt_i][wid_i] = 0;
	}

	return (td);
}
