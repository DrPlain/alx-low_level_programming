#include "main.h"

/**
 * _memset - A function that fills memory with constant byte
 *
 * @s: Input string
 *
 * @b: constant byte to be filled
 *
 * n: The first n bytes to be filled
 *
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
