#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbees from n to 98
 *
 *@n: Input integer
 *
 * Return: nothing
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	_putchar('\n');
}
