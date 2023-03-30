#include "lists.h"

/**
 * list_len - finds the lenght of elements in the linked list
 * @h: head pointer
 * Return: number of elements found in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		printf("List is empty");

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
