#include "main.h"

/**
 * _realloc - reallocates memeory and uses a pointer to point to it
 * @ptr: old memory allocated using malloc
 * @old_size: size of old memory in bytes
 * @new_size: size of new memory in bytes
 * Return: pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	ptr1 = realloc(ptr, new_size);

	if (ptr1 == NULL)
		return (malloc(new_size));
	if (new_size > old_size)
		ptr1 = ptr;
	if (new_size == old_size)
		return (ptr);
	if (new_size == old_size && ptr1 != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr1);
	free(ptr1);
}
