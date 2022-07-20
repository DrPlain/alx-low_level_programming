#include "main.h"
int is_divisible(int n, int i);
/**
 * is_prime_number - Evaluates if a number is prime
 *
 * @n: An integer
 *
 * Return: 1 if n is prime otherwise 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_divisible(n, i));
}

/**
 * is_divisible - Evaluates if n is divisible by i
 *
 * @n: Integer
 *
 * @i: Index
 *
 * Return: 1 if n is divisible otherwise 0
 */

int is_divisible(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);

	return (is_divisible(n, i + 1));
}
