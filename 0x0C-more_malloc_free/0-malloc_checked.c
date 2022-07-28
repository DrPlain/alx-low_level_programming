#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - Allocates memory and on failure causes
 * normal process termination
 *
 * @b: size of memory to be allocated
 *
 * Return: Pointer to newly allocatef memory or exit value of 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);

	return (memory);
}
