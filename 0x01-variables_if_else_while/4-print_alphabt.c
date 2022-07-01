#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (SUccess)
 */
int main(void)
{
	char low;
	char e = 'e';
	char q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != q && low != e)
		{
			putchar(low);
		}
	}

	putchar('\n');

	return (0);
}
