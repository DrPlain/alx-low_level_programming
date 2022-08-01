#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free allocated memory
 *
 * @d: Name of dog structure
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
