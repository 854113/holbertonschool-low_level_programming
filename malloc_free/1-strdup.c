#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *					containing copied string given as a parameter.
 * @str: String duplicated.
 *
 * Return: To return NULL - str == NULL or insufficient memory is available.
 *					Otherwise, returns pointer to duplicated string.
 */

char *_strdup(char *str)
{
	char *copy;
	int i;
	int l;

	if (str == NULL)
		return (NULL);

	for (l = 0; str[l] != '\0'; l++)

	copy = malloc(sizeof(char) * (l + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}

	i++;
	copy[i] = '\0';

	return (copy);
}
