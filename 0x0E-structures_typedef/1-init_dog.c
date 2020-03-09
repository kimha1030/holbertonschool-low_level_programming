#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: struct
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: void
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
