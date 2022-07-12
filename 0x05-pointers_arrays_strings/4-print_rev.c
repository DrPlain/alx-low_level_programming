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
	int len;

	for (len = 0; str[len] != '\0'; len++)
		len++;

	while (len)
	{
		_putchar(str[--len]);
	}
	_putchar('\n');
}
