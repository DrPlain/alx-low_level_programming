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
	if (size <= 0)
		putchar('\n');

	int i, j, k, space;

	for (i = 0; i < size; i++)
	{
		space = size - i - 1;
		for (k = 0; k < space; k++)
		{
			putchar(' ');
		}

		for (j = 0; j < size - space; j++)
		{
		putchar('#');
		}
		putchar('\n');
	}
}
