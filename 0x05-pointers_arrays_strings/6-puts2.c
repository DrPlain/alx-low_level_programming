#include "main.h"

/**
 * puts2 - prints alternate charater of  string starting from 1st
 *
 * @str: Argument, string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		if (i < len)
			_putchar(str[i]);
	}
	_putchar('\n');
}
