#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: Input variable
 *
 * Return: 1 if n is greater than zero and print +,
 * 0 if n is zero and print 0
 * -1 if n is less than zero and print -
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}


	return (sign);
}
