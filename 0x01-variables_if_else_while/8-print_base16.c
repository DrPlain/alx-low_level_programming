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
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
	{
		putchar(lowercase);
	}

	putchar('\n');

	return (0);
}
