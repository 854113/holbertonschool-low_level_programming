#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 *
 * @c: character to check.
 * Return: 1 if correct, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
