#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of list.
 * @head: double pointer
 * @n: const
 * Return: new
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
