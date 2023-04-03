#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the list
 * @head: pointer to head pointer
 * @n: data to be passed
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		return (*head = new);

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
