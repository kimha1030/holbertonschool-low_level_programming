#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer
 * Return: i
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *pt;

	pt = h;
	while (pt)
	{
		printf("[%u] ", pt->len);
		if (pt->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", pt->str);
		}
		pt = pt->next;
		i++;
	}
	return (i);
}
