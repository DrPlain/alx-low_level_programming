#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

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
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (string == NULL)
			printf("(nil");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
