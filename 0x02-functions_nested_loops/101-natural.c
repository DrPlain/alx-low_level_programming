#include <stdio.h>
#include "main.h"

/**
 * sumMultiples - computes and prints sum of multiples of 3 & 5 below 1024
 *
 * Return: nothing
 */

void sumMultiples(void)
{
	int n;
	int sum1 = 0;
	int sum2 = 0;
	int sumTotal = 0;

	for (n = 3; n < 1024; n++)
	{
		if (n % 3 == 0)
			sum1 = sum1 +  n;
		if (n % 5 == 0)
			sum2 = sum2 +  n;
	}
	sumTotal = sum1 + sum2;

	printf(" %d\n", sumTotal);
}
