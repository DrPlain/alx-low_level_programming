#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - A fuction that excutes a function given as parameter
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to the function to be executed
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
