#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: double pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	if (*head == NULL)
	{
		return;
	}
	else
	{
		while (*head)
		{
			aux = *head;
			*head = aux->next;
			free(aux);
		}
		*head = NULL;
	}
}
