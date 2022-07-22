#include "main.h"

/**
 * _strcmp - A function that works exactly like strcmp
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
