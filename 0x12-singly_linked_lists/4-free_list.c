#include "lists.h"

/**
 * free_list -  function that free a list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux;
	unsigned int i;

	for (i = 0 ; head ; i++)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
