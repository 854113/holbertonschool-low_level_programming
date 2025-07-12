#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 *
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
