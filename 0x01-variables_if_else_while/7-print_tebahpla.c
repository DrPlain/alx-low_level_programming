#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (SUccess)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase >= 'a'; lowercase--)
	{
		putchar(lowercase);
	}

	putchar('\n');

	return (0);
}
