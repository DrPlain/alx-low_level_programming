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
	char *ptr = dest + strlen(dest);
	int i;


	for (i = 0; i < n && *src != '\0'; i++)

		*ptr++ = *src++;

	*ptr = '\0';
	return (dest);
}
