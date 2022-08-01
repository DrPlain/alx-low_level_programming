#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the objects of struct dog
 *
 * @d: Variable name
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL || d->owner == NULL)
		printf("(nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
