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
	int i = 0;
	char *pstr;

	size = strlen(str) + 1;
	pstr = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (pstr == NULL)
		return (NULL);

	while (i < size)
	{
		pstr[i] = str[i];
		i++;
	}
	pstr[i] = '\0';
	return (pstr);
}
