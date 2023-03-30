#include "lists.h"

/**
 * print_list - prints data in the linked list
 * @h: head pointer pointing to the first node
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s \n",h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
