#include "lists.h"

/**
 * free_dlistint_t -  function that free a list
 * @head: pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	dlistint_t *p;

	aux = head;
	while (aux != NULL)
	{
		p = aux->next;
		free(aux);
		aux = p;
	}
}
