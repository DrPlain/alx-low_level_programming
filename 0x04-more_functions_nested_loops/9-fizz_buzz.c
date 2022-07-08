#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 *
 * Prints 1-100 followed by a new line
 * Print Fizz instead for multiples of 3
 * Print Buzz for multiples of 5
 * Print FizzBuzz for multiples of 3 and 5
 *
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
