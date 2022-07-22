#include "main.h"
#include <string.h>

/**
 * _strstr - locates a character in a string
 *
 * @haystack: Input string
 *
 * @needle: Character to locate
 *
 * Return: pointer to beginning of the locayed sub string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
