#include "lists.h"

/**
 * sum_dlistint - returns the sum of elements of double linked list.
 * @head: pointer
 * Return: sum of elements or 0, if it is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux;

	aux = head;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (aux != NULL)
		{
			sum = sum + aux->n;
			aux = aux->next;
		}
	}
	return (sum);
}
