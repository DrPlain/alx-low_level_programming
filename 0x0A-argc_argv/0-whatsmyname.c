#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints its name then newline
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{

	if (argc != 0)
		printf("%s\n", argv[0]);
	return (0);
}
