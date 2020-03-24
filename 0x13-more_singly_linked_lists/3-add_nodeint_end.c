#include "lists.h"

/**
 * *add_nodeint_end -  adds a new node at the end of list.
 * @head: double pointer
 * @n: const
 * Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = NULL;
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
