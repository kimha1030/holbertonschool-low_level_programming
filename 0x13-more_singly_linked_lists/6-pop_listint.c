#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: double pointer
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int aux = -1;
	listint_t *next = NULL;

	if (*head == NULL)
		return (0);
	next = (*head)->next;
	aux = (*head)->n;
	free(*head);
	*head = next;
	return (aux);
}
