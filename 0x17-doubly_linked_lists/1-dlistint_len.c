#include "lists.h"

/**
 *  dlistint_len - prints the number of nodes in a list
 *  @h: head pointer
 *  Return: number of ndoes in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		h = h->next;
		sum += 1;
	}
	return (sum);
}
