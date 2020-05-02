#include "lists.h"

/**
 * dlistint_len - prints number elements of a dlist_t listint.
 * @h: pointer to head
 * Return: i
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *aux = h;

	for (i = 0; aux != NULL; i++)
		aux = aux->next;
	return (i);
}
