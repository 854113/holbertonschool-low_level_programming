#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src,
 *		the terminating null byte, to a buffer pointed to by @dest.
 *
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

