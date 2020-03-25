#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer
 * @index: index of the node
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
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
