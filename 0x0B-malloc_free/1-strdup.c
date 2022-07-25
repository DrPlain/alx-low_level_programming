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
	int size = 0;
	char *pstr;

	while (str[size] != '\0')
		size++;

	pstr = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);
	if (pstr == NULL)
		return (NULL);

	strcpy(pstr, str);

	return (pstr);
}
