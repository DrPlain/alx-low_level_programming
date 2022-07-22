#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to src to dest including \0
 *
 * @src: pointer to source string
 *
 * @dest: destination buffer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
