#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes a node
 *@index: index to perform ops
 *@head: head pointer
 *Return: 1 on sucess -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;

	dlistint_t *cur = *head;

	if (head == NULL || *head == NULL)
	return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	while (cur != NULL && count < index)
	{
		cur = cur->next;
		count++;
	}
	if (cur == NULL)
		return (-1);
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	if (cur->prev != NULL)
		cur->prev->next = cur->next;

	free(cur);
return (1);
}
