#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: New dog name
 *
 * @age: New dog's age
 *
 * @owner:New dog's owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int len_name = 0, len_owner = 0, i;

	while (name[len_name] != '\0')
		len_name++;

	while (owner[len_owner] != '\0')
		len_owner++;

	new_dog = malloc(sizeof(dot_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
		return (NULL);
	for (i = 0; i < len_name; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
		return (NULL);

	for (i = 0; i < len_owner; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;

	return (new_dog);
}
