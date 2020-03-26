#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: double pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;
	listint_t *p;

	aux = *head;
	while (aux)
	{
		p = aux->next;
		free(aux);
		aux = p;
	}
	*head = NULL;
}
