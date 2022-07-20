#include "main.h"
int natural_sqrt(int start, int n);

/**
 * sqrt_recursion - Evaluates for natural sqrt of n
 *
 * @n: Input integer
 *
 * Return: sqrt of n or -1 if n does not have a natural sqrt
 */

int sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(natural_sqrt(1, n));
}

/**
 * sqrt - Evaluates for natural sqrt of n
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
	return(natural_sqrt(start + 1, n));
}
