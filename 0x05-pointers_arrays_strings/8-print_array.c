#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 *
 * @n: Number of elements to print (integer)
 *
 * @a: Array name
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
	else
		fprintf(stderr, "Invalid array size\n");
}