#include <stdio.h>

/**
 * main - Prints all single digit number of base 10
 *
 * Return: Always 0
 */

int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
		printf("%d", numb);

	printf("\n");

	return (0);
}
