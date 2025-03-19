#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int numb;
	char alpha;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
