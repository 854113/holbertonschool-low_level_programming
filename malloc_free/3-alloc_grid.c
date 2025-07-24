#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: A pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **dd;
	int h = 0;
	int w = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	dd = malloc(height * sizeof(int *));

	if (dd == NULL)
		return (NULL);

	for (h = 0; h < height; h++)

	{
		dd[h] = malloc(width * sizeof(int));

		if (dd[h] == NULL)
		{
			for (w = 0; w < h; w++)
			{
				free(dd[w]);
			}
			free(dd);
			return (NULL);
		}

		for (w = 0; w < width; w++)
		{
			dd[h][w] = 0;
		}
	}
	return (dd);
}
