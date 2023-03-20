#include "dog.h"

/**
 * init_dog - initializing the dog struct
 * @d: pointer to the dog struct
 * @name: dog member name
 * @age: age of dog
 * @owner:  owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
