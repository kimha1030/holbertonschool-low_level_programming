#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer
 * Return: i
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h ; i++)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
	}
	return (i);
}
