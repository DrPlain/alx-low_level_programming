#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: String to be scanned
 *
 * @accept: prefix substring
 *
 * Return: uniaue number of time prefix substring appears
 */

unsigned int _strspn(char *s, char *accept)
{
	int unique;
	char *ptr = accept;
	unsigned int count = 0;

	while (*s != '\0')
	{
		unique = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				unique = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = ptr;
		if (unique == 0)
			break;
	}
	return (count);
}
