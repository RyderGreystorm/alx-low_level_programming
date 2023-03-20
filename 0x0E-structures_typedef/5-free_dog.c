#include "dog.h"

/**
 * free_dog - free all memory allocated for dog
 * @d: pointer to the struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
