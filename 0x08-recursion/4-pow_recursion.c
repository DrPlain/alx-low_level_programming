#include "main.h"

/**
 * _pow_recursion - returns x to power of y
 *
 * @x: A positive integer
 *
 * @y: The power integer
 *
 * Return: x to power y or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
