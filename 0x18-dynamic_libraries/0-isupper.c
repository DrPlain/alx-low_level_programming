#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: Input character
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	char uppercase;
	int isupper = 0;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
