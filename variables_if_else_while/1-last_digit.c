#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 in success
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - (rand() % 2) * 2 * rand(); /* n puede ser positivo o negativo */
	ld = n % 10;

	if (ld < 0)
		ld = -ld;

	printf("Last digit of %d is %d", n, ld);

	if (ld > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (ld == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
