#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node -  adds a new node at the beginning of list_t.
 * @head: double pointer
 * @str: char
 * Return: new
 **/

list_t *add_node(list_t **head, const char *str)
{
	int cont = 0;
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (*str)
	{
		str++;
		cont++;
	}
	new->len = cont;
	new->next = *head;
	*head = new;
	return (new);
}
