#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: Input character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	int letter = 0;
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
			{
				letter = 1;
			}
		}
	}

	return (letter);
}


