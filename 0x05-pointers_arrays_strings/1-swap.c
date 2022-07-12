#include "main.h"
/**
 * swap_int - Swaps the value of two integers)
 *
 * @a: First argument, integer type pointer
 *
 * @b: Second argument, integer type pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
