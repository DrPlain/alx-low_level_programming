#include "main.h"

/**
 * string_toupper - changes all lower case letters of a string to upper
 *
 * @str: string
 *
 * Return: str string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (ptr);
}
