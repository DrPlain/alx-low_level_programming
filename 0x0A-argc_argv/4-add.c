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
	int i;
	int num;
	int result = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result = result + num;
	}
	printf("%d\n", result);
	return (0);
}
