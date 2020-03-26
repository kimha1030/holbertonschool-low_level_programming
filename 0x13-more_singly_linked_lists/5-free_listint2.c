#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: double pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p, *aux = *head;
	*head = NULL;

	while (aux)
	{
		p = aux;
		aux = aux->next;
		free(p);
	}
	*head = NULL;
}
