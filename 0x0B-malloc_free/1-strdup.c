#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a new string which is a duplicate of str
 *
 * @str: String to be duplicated
 *
 * Return: duplicate string
 */

char *_strdup(char *str)
{
	int k = 0;
	int j;
	int i = 0;
	char *pstr = NULL;

	while (str[i] != '\0')
	{
		i++;
		k++;
	}

	pstr = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		pstr[j] = str[j];

	return (pstr);
}
