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
	int ld;
	int last_digit;

	srand(time(0));
	ld = rand();
	ld = ld - (rand() % 2) * 2 * ld;
	last_digit = ld % 10;

	printf("Last digit of %d is %d", ld, last_digit);

	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
