#include "main.h"
int natural_sqrt(int start, int n);

/**
 * _sqrt_recursion - Evaluates for natural sqrt of n
 *
 * @n: Input integer
 *
 * Return: sqrt of n or -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt(1, n));
}

/**
 * natural_sqrt - Evaluates for natural sqrt of n
 *
 * @n: Input integer
 *
 * @start: Starting index
 *
 * Return: sqrt of n or -1 if n does not have a natural sqrt
 */

int natural_sqrt(int start, int n)
{
	if (start > n)
		return (-1);
	if (start * start == n)
		return (start);
	return (natural_sqrt(start + 1, n));
}
