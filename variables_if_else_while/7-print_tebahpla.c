#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverese,
 *				followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char ahpla;

	for (ahpla = 'z'; ahpla >= 'a'; ahpla--)
		putchar(ahpla);

	putchar('\n');

	return (0);
}
