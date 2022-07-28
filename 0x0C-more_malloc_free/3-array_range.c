#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: Minimum value
 *
 * @max: Maximum value
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int i, size, *range;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
