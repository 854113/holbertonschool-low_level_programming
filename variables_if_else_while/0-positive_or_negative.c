#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pon;

	srand(time(0));
	pon = rand() - RAND_MAX / 2;

	if (pon > 0)
	{
		printf("%d is positive\n", pon);
	}
	else if (pon == 0)
	{
		printf("%d is zero\n", pon);
	}
	else
	{
		printf("%d is negative\n", pon);
	}

	return (0);
}
