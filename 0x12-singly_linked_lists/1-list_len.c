#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in list_t.
 * @h: pointer
 * Return: i
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *pt;

	pt = h;
	while (pt)
	{
		pt = pt->next;
		i++;
	}
	return (i);
}
