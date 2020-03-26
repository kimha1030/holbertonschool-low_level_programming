#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *aux = h;

	for (i = 0; aux != NULL; i++)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
	}
	return (i);
}
