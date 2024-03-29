#include <stdio.h>

/**
 * print_name - A function that prints name
 *
 * @name: Pointer to name to be printed
 *
 * @f: function to print name
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
