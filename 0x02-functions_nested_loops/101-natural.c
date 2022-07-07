#include <stdio.h>

/**
 * main - computes and prints sum of multiples of 3 & 5 below 1024
 *
 * Return: 0 )success)
 */

int main(void)
{
	int n;
	int sum = 0;

	for (n = 3; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum +  n;
	}

	printf(" %d\n", sum);

	return (0);
}
