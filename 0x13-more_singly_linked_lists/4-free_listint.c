#include "lists.h"

/**
 * free_listint -  function that free a list
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;
	listint_t *p;

	aux = head;
	while (aux != NULL)
	{
		p = aux->next;
		free(aux);
		aux = p;
	}
}
