#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 *
 * @size: length of array
 * @c: c
 * Return: if size = 0 or the function fails - NULL.
 *		Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
