#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers
 *
 * @separator: Pointer to the string to be printed between numbers
 *
 * @n: Number of integers passed to the function
 *
 * @...: Other parameters
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
