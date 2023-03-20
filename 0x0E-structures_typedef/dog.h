#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct dog - a structure of the properties of dogs
 * struct dog_t - new name for dog type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: person who owns the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
