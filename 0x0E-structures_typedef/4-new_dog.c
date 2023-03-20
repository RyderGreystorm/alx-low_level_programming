#include "dog.h"

/**
 * new_dog - creates a new dog object
 * @name: name of dog as struct member
 * @age: age of dog as struct member
 * @owner: owner of dog as struct member
 * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
