#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings passed to it
 *
 * @separator: Pointer to the string to be printed between strings
 *
 * @n: Number of strings passed to the function
 *
 * @...: Other parameters
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
