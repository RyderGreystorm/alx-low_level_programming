#include "lists.h"

/**
 * print_listint - prints the data in the linked list
 * @h: address of the head pointer passed as params
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
