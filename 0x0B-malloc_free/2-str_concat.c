#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: Destination string
 *
 * @s2: Source string
 *
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *newString;
	int size = strlen(s1) + strlen(s2);


	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	newString = malloc(size * sizeof(char) + 1);

	if (newString == 0)
		return (NULL);


	strcat(newString, s1);
	strcat(newString, s2);

	return (newString);
}
