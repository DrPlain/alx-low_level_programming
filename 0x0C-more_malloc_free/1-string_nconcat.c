#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: Destination string
 *
 * @s2: Source string
 *
 * @n: Number of bytes of s2 to be copied to s1
 *
 * Return: pointer to newly allocated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	int i, len1, len2, lenTotal;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < strlen(s2))
		lenTotal = len1 + n + 1;
	else
		lenTotal = len1 + len2 + 1;

	newString = malloc(sizeof(char) * lenTotal);
	if (newString == NULL)
		return (NULL);

	for (i = 0; i < lenTotal - 1; i++)
	{
		if (i < len1)
			newString[i] = *s1, s1++;
		else
			newString[i] = *s2, s2++;
	}
	newString[i] = '\0';
	return (newString);
}
