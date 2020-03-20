#include "lists.h"

/**
 * *add_node_end -  adds a new node at the end of list_t.
 * @head: double pointer
 * @str: pointer
 * Return: new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	unsigned int cont = 0;

	if (str == NULL)
		return (NULL);
	new =  malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	while (*str)
	{
		str++;
		cont++;
	}
	new->len = cont;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = NULL;
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
