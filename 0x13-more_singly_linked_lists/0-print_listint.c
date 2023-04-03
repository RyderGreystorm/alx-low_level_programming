#include "lists.h"

/**
 * print_listint - prints the data in the linked list
 * @h: address of the head pointer passed as params
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		printf("The lisst is empty");

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
