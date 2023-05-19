#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of the linked list
 * @head: address of head pointer
 * @n: data passed to the linked list
 * Return: address of the new node or null if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *ptr;

	tmp = malloc(sizeof(dlistint_t));

	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (*head == NULL)
		*head = tmp;
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = tmp;
		tmp->prev = ptr;
	}
	return (*head);
}
