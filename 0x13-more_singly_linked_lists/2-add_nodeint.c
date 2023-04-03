#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of the linked list
 * @head: address of the header pointer
 * @n:data to be passed into the node
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	new->next = *head;
	*head = new;

	return (new);
}
