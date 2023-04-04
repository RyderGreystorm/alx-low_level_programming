#include "lists.h"

/**
 * pop_listint - deltes the first element in the list
 * @head: address of the head node
 * Return: datat in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	while(*head != NULL)
	{
		n = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		tmp = NULL;
	}
	return (n);
}
