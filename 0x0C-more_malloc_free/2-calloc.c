#include "main.h"

/**
 * _calloc - this allocates mmemory for a number of elements
 * @nmemb: number of elements to get size allocated to
 * @size: byte of memory to allocate
 * Return: pointer to the memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);

	return (ptr);
}
