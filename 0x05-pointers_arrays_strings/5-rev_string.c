#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: String argument
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char str;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len--; i++)
	{
		str = s[i];
		s[i] = s[len];
		s[len] = str;
	}
}
