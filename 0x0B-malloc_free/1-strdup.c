#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a new string which is a duplicate of str
 *
 * @str: String to be duplicated
 *
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	int size;
	char *pstr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	pstr = malloc(size * sizeof(*str) + 1);

	if (pstr == 0)
		return (NULL);

	strcpy(pstr, str);
	return (pstr);
}
