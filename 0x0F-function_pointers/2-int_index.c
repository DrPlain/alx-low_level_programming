#include <stdlib.h>
/**
 * int_index - A function that searches for an integer
 * @array: pointer to an array
 * @size: size of array
 * @cmp: pointer to the function used to compare values
 * Return: O if an integer is found, -1 if no element matches
 * or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	if (i == size)
		return (-1);
	return (-1);
}
