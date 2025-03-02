#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *			starting with the first character, followed by a new line.
 * @str: String with characters.
 */

void puts2(char *str)
{
	int i = 0;
	int l = 0;

	while (str[i++])
		l++;

	for (i = 0; i < l; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

