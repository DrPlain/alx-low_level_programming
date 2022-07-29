#include "main.h"

/**
 * print_triangle - prints triangle using #
 *
 * @size: Size of triangle, all sidez are of same size
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j, k, space;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		space = size - i - 1;
		for (k = 0; k < space; k++)
		{
			_putchar(' ');
		}

		for (j = 0; j < size - space; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
}
