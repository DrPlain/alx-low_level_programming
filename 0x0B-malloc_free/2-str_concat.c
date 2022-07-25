#include "main.h"
#include <stdlib.h>
#include <string.h>
int _strlen(char *s);

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
	int i = _strlen(s1);
	int j = _strlen(s2);


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	newString = malloc((i + j) * sizeof(*s1) + 1);

	if (newString == 0)
		return (NULL);


	strcat(newString, s1);
	strcat(newString, s2);

	return (newString);
}

/**
 * _strlen - finds the length of a string
 *
 * @s: Input string
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
