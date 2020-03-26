#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *aux = h;

	while (aux != NULL)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
		i++;
	}
	return (i);
}
