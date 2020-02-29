#include "holberton.h"

/**
 * _isdigit - this function checks for digit as caracter.
 * @c: character.
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
