#include "main.h"

/**
 * _strncpy - A function that works exactly like strncpy
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: maximum size of src that can be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] =  src[i];
		i++;
	}
	for (; i < n; i++)

		dest[i] = '\0';

	return (dest);
}
