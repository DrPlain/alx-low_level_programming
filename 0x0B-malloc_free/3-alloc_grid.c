#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - Allocates memory to a two dimensional arrays
 *
 * @col: width of the array
 *
 * @row: height of array
 *
 * Return: pointer to two dimensional array
 */

int **alloc_grid(int col, int row)
{
	int i, j;
	int **array;

	array = (int **)malloc(row * sizeof(int *));
	if (row <= 0 || col <= 0 || array == 0)
		return (NULL);

	for (i = 0; i < row; i++)
	{
		array[i] = (int *)malloc(col * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
