#include "main.h"
#include <string.h>

/**
 * _strcat - appends src string to dest string
 *
 * @dest: pointer to destination string
 *
 * @src: pointer to source string
 *
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];

	return (dest);
}
