#include "main.h"

/**
 * print_sign - imprime si es un simbolo o un numero
 * @n: int
 *
 * Return: devuelve 0 o 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
