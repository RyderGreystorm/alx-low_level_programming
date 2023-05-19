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

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
