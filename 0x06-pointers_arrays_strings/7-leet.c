#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 *
 * @s: String
 *
 * Return: string
 */

char *leet(char *s)
{
	int i = 0;
	int j;

	char numSub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str[j])
				s[i] = numSub[j];
		}
		i++;
	}
	return (s);
}
