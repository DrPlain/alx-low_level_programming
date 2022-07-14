#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings and will use at most n bytes from src
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: maximum num of bytes to copy from src
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int i;
	
	len1 = strlen(dest);

	for (i = 0; i < n; i++)
		dest[len1 + i] = src[i];

	return (dest);
}
