#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char and initializes it
 * with a specific char
 *
 * @size: Array size
 *
 * @c: Char to be used for initialization
 *
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
