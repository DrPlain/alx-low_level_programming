#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: An input character
 *
 * Return: 1 if input is lowercase and 0 if input is UPPERCASE
 */

int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			low = 1;
		}

	}
	return (low);
}
