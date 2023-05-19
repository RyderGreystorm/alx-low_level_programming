#include "lists.h"

/**
 * get_dnodeint_at_index - get node at a particular index
 * @head: head pointer
 * @index: intex of interest
 * Return: node at the index of interest
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	while (ptr != NULL && index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	if (!ptr)
		return (NULL);
	return (ptr);
}
