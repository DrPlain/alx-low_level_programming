#include "main.h"

/**
 * print_number - Prints a number using _putchar only
 *
 * @n: Number to ne printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
