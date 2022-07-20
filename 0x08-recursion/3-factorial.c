#include "main.h"

/**
 * factorial - returns factorial of a given num
 *
 * @n: A positive integer
 *
 * Return: factorial of n or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
