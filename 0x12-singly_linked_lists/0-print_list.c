#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer
 * Return: i
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *pt;

	pt = h;
	while (pt)
	{
		if (pt->str == NULL)
		{
			printf("[0] (nil)\n");
			pt = pt->next;
		}
		else
		{
			printf("[%u] %s\n", pt->len, pt->str);
			pt = pt->next;
		}
		i++;
	}
	return (i);
}
