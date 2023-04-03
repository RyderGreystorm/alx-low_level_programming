#include "lists.h"

/**
 * listint_len - finds the length of the linked list by counting num of nodes
 * @h: address of head pointer
 * Return: number of nodes found in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("List is empty");
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
