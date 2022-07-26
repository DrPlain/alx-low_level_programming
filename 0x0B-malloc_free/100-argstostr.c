#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: Argument counter
 *
 * @av: Argument value
 *
 * Return: Pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *newString;
	int i, j, k = 0, len = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	len++;

	newString = malloc(len * sizeof(char));
	if (newString == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newString[k] = av[i][j];
			k++;
		}
		newString[k] = '\n';
		k++;
	}
	newString[k] = '\0';

	return (newString);
}
