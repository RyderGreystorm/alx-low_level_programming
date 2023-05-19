#include "lists.h"

/**
 * sum_dlistint - sum all data oin the linked list
 * @head: head pointer
 * Return: sum of all data present in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *ptr = head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		sum += ptr->n;
	}
	if (!ptr)
		return (0);
	return (sum);
}
