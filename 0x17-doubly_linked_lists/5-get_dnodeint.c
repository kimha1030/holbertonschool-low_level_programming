#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of double linked list.
 * @head: pointer
 * @index: index of the node
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		aux = head;
		while (aux != NULL)
		{
			if (count == index)
			{
				return (aux);
			}
			else
			{
				count++;
				aux = aux->next;
			}
		}
		return (NULL);
	}
}
