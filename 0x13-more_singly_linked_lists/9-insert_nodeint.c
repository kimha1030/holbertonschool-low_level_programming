#include "lists.h"

/**
 * *insert_nodeint_at_index - adds a new node at a given position.
 * @head: double pointer
 * @idx: index where new node should be added.
 * @n: value added.
 * Return: listint_t
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *aux;
	unsigned int i;

	aux = *head;
	for (i = 1 ; i <= (idx - 1) ; i++)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
