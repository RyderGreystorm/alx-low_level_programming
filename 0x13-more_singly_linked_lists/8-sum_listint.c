#include "lists.h"

/**
 * sum_listint - sums all the data in the linked list and returns is
 * @head: address of the head pointer
 * Return: sum of the total data in the linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
