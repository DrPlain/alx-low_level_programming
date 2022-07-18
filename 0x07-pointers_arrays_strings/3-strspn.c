#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: String to be scanned
 *
 * @accept: prefix substring
 *
 * Return: uniaue number of time prefix substring appears
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
