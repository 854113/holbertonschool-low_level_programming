#include <stdio.h>

/**
 * main - prints all single digit numbers base 10,
 *			without using printf function
 *
 * Return: Always 0
 */

int main(void)
{
	int numbz;

	for (numbz = 0; numbz < 10; numbz++)
		putchar((numbz % 10) + '0');

	putchar('\n');

	return (0);
}
