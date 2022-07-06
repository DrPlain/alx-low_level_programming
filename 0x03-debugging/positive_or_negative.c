#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Checks for negative, zero or positive num
 *
 * @i: Input integer
 *
 * Return: nothingu
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
