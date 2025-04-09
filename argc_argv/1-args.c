#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 *
 * @argc: The number of arguments to print.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0 (succes).
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
