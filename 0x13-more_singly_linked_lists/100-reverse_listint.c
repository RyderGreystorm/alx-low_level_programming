#include "lists.h"

/**
 * reverse_listint - reverses the nodes in a linked list
 * @head: address of the head pointer
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *last, *next;

	last = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}
	*head = last;
	return (*head);
}
