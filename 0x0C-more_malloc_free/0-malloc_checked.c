#include "main.h"

/**
 * malloc_checked - allocated memory
 * @b: unsigned int that determines the
 * amount of memory to be allocated
 * Return: pointer to the memory reserved
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
