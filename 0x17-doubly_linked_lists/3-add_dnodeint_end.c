#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of list.
 * @head: double pointer
 * @n: const
 * Return: new
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *new;
	dlistint_t *last;

	if (head == NULL)
		return (NULL);
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	last = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	for (i = 0; last->next != NULL; i++)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
