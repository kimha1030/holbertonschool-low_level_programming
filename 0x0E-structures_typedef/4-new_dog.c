#include "dog.h"
#include <stdlib.h>
/**
 * dog_t *new_dog - Function that creates a new dog.
 * @name: char
 * @age: float.
 * @owner: char.
 * Return: my_dog
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int x, lname, lowner;

	my_dog =  malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	for (lname = 0; name[lname] != '\0'; lname++)
	for (lowner = 0; owner[lowner] != '\0'; lowner++)
	(*my_dog).name = malloc(lname + 1);
	if ((*my_dog).name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	(*my_dog).owner = malloc(lowner + 1);
	if ((*my_dog).owner == NULL)
	{
		free((*my_dog).name);
		free(my_dog);
		return (NULL);
	}
	for (x = 0 ; x < lname ; x++)
		(*my_dog).name[x] = name[x];
	(*my_dog).name[x] = '\0';
	for (x = 0 ; x < lowner; x++)
		(*my_dog).owner[x] = owner[x];
	(*my_dog).owner[x] = '\0';
	(*my_dog).age = age;
	return (my_dog);
}
