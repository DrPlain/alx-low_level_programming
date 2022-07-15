#include "main.h"

/**
 * print_number - Print a long int uaing putchar
 *
 * @n: Long int to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		a = n;
		print_number(a / 10);
	}

	_putchar(n % 10 + '0');
}
