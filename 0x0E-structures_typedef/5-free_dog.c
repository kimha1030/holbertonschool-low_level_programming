#include "dog.h"
#include <stdio.h>

/**
 * free_dog - function that frees dogs.
 * @d: pointer
 * Return: void
**/

void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	if((d) == NULL)
	{
		return 0;
		free(d);
	}
}
