#include "main.h"

/**
 * create_array - creates an array of type char initalized
 * with a specifi char
 * @size: of type size_t passed as number of size of array
 * @c: specific char used to populate the array
 * Return: pointer to the char array
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
