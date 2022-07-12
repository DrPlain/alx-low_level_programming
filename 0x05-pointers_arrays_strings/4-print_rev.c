#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line to stdout
 *
 * @str: Argument, string
 *
 * Return: nothing
 */

void print_rev(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (i = len; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
