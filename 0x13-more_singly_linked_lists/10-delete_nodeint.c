#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at the nth index
 * @head: pointer to the head pointer
 * @index: index at whihc the node will be deleted
 * Return: 1 for success and -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *prev;

	cur = *head;
	prev = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = cur->next;
		free(cur);
		cur = NULL;
		return (1);
	}
	else
	{
		while (index != 0 && cur != NULL)
		{
			prev = cur;
			cur = cur->next;
			index--;
		}
		prev->next = cur->next;
		free(cur);
		cur = NULL;
		return (1);
	}
}
