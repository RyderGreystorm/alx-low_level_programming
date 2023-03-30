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
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s \n",h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
