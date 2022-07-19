#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 *
 * @s: pointer to string
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
