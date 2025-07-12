#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area.
 *
 * @s: A pointer
 * @b: The character
 * @n: The number of bytes
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;  i++)
	{
		s[i] = b;
	}
	return (s);
}
