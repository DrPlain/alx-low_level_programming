#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: Destination string
 *
 * @src: source string
 *
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}
