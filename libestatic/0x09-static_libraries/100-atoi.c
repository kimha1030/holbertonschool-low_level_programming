#include "holberton.h"
/**
* _atoi - print converT
* @s: pointr character
* Return: num
**/

int _atoi(char *s)
{
	int i, signo, num, bo;
	i = 0;
	signo = -1;
	num = 0;
	bo = 0;

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
