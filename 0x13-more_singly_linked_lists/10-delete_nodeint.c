#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *p;
	unsigned int i;

	aux = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
		*head = aux->next;
	for (i = 0 ; i < (index - 1) ; i++)
	{
		if (aux->next == NULL)
			return (-1);
		aux = aux->next;
	}
	p = aux->next;
	aux->next = p->next;
	free(p);
	return (1);
}
