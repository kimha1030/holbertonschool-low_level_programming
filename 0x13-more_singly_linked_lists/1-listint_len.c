#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in list.
 * @h: pointer
 * Return: i
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *pt;

	pt = h;
	while (pt)
	{
		pt = pt->next;
		i++;
	}
	return (i);
}
