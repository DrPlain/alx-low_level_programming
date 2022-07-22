#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two intergers
 *
 * @argc: Argument's counter
 *
 * @argv: Argument's value
 *
 * Return: 0 success otherwise 1
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
