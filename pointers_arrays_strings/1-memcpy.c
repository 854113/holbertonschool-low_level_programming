#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *
 * @dest: A pointer
 * @src: The source buffer
 * @n: The number of bytes 
 *
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
