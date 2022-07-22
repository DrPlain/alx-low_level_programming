#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Adds positive integers
 *
 * @argc: Argument's counter
 *
 * @argv: Argument's value
 *
 * Return: 0 success otherwise 1
 */

int main(int argc, char *argv[])
{
	int num;
	int i;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(*argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num = atoi(argv[i]);
			result = result + num;
		}
	}
	printf("%d\n", result);
	return (0);
}

