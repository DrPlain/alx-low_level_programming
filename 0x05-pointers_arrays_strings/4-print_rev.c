#include "main.h"

/**
 * _puts - prints a string in reverse followed by a new line to stdout
 *
 * @str: Argument, string
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = _strlen(str); i <= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
