#include "holberton.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: pointer
 * Return: s
 */
char *rot13(char *s)
{
	int i, j = 0;

	char c1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char c2[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char c3[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	char c4[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char n1[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char n2[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char n3[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char n4[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		while((c1[j] && c2[j] && c3[j] && c4[j]) != '\0')
		{
			if (s[i] == (c1[j] && c2[j] && c3[j] && c4[j]))
			{
				s[i] = (n1[j] && n2[j] && n3[j] && n4[j]);
			}
		j++;
		}
	}
	return (s);
}
