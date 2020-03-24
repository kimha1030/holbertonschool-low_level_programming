#include "lists.h"

/**
 * sum_listint - returns the sum of all elements of a list.
 * @head: pointer
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux;
	aux = head;

	if (head == NULL)
		return (0);
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
