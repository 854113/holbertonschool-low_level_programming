#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 *
 * @c: Character to check.
 * Return: 1 for uppercase character, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
