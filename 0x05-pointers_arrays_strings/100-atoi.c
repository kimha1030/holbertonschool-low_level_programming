#include "holberton.h"
/**
 * _atoi - convertir string to integer
 * @s: pointer
 * Return: number
 **/
int _atoi(char *s)
{
	int i, sign = -1, number = 0, aux = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = number * 10;
			number = number - (s[i] - '0');
			aux = 1;
		}
		else if (aux == 1)
		{
			break;
		}
	}
	number = number * sign;
	return (number);
}
