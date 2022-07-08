#include "main.h"

/**
 * print_square - prints a square using #
 *
 * @n: Input integer (size)
 *
 * Return: nothing
 */

void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
