#include "lists.h"
/**
 * print_dlistint - prints the elements in the node
 * @h: head pointer
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum += 1;
	}
	return (sum);
}
