#include "function_pointers.h"

/**
 * print_name - Prints a name using a dunction pointer
 * @name: name to print
 * @f: pointer to the function that will print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
