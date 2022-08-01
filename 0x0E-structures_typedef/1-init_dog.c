#include "dog.h"

/**
 * init_dog - Initialises a variable of of type struct dog
 *
 * @d: Variable name
 *
 * @name: Dog's name
 *
 * @age: Dog's age
 *
 * @owner: Dog's owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
