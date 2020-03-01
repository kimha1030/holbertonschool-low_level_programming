#include "holberton.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: string.
 * @needle: string.
 * Return: char.
**/
char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y;

	while (needle[x] != '\0')
	{
		x++;
	}
	while (*haystack)
	{
		for (y = 0 ; needle[y] ; y++)
		{
			if (haystack[y] != needle[y])
			{
				break;
			}
		}
		if (y != x)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return ('\0');
}
