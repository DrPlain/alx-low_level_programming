#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a matrix of integers
 *
 * @a: pointer to array
 *
 * @size: size of array
 *
 * Return: void
 * */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k = 0;
	int sum1 = 0;
	int sum2 = 0;

	for(i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[k];
			if (i + j == size - 1)
				sum2 += a[k];
			k++;
		}
	}
	printf("%i, %i\n", sum1, sum2);
}
