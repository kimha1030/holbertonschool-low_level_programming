#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that free dogs.
 * @d: pointer.
 * Return: void.
**/
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
