#include "main.h"

/**
 * cap_string - Capitalises all words of a string
 *
 * @s: Input string
 *
 * Return: string s
 */

char *cap_string(char *s)
{
	char separator[13] = {' ','\t','\n',',',';','.','!','"','(',')','{','}'};
	char *ptr = s;
	int i;
	int j;

	for (i = 0; ptr[i] != '\0'; i++)
	{

		for (j = 0; j < 13; j++)
		{
			if (
			if (ptr[i] == separator[j] || ptr[i + 1] != separator[j])
			{
				ptr[i + 1] = ptr[i + 1] - 32;
			}
		}
	}
	return (ptr);
}
