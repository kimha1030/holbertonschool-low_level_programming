#include "holberton.h"

/**
 * _atoi - print converT
 * @s: pointr character
 * Return: num
 **/
int _atoi(const char *s)
{
	int i = 0, signo = -1, num = 0, bo = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			signo *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num *= 10;
			num -= (s[i] - '0');
			bo = 1;
		}
		else if (bo == 1)
		{
			break;
		}
		i++;
	}
	num *= signo;
	return (num);
}

/**
 * _isdigit - this function checks for digit as caracter.
 * @c: character.
 * Return: 0 or 1.
 */
int _isdigit(const char *c)
{
	int x, y = 1;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] != '0' && c[x] != '1')
		{
			return (0);
		}
	}
	return (y);
}

/**
 * binary_yo_uint - converts a binary number to an unsigned int.
 * @b: pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, last = 0, sum = 0;
	int value, exp = 1, ult;
	if (b == NULL)
		return (0);
	ult = _isdigit(b);
	if (ult == 0)
		return (0);
	else
	{
		value = _atoi(b);
		for(i = 0; value != 0 ; i++)
		{
			if (i == 0)
				exp = exp * 1;
			else
				exp = exp * 2;
			last = value % 10;
			sum = sum + (last * exp);
			value = value / 10;
		}
	}
	return (sum);
}
