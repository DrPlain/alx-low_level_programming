#include "main.h"
#include <string.h>

/**
 * _strpbrk - equivalent to strpbrk funtion
 *
 * @s: Input string
 *
 * @accept: string to be searched for
 *
 * Return: pointer to S or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
