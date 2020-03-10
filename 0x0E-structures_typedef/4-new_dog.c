#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: struct
 * Return: void
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t * new_dog = (dog_t *) malloc(sizeof(dog_t));
	new_dog->name = name;
	new_dog->owner = owner;
	return (new_dog);
}
