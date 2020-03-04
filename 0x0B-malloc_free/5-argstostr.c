#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: integer
 * @av: double pointer
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	int x, y;
	int z = 0, lenght = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			lenght++;
	}
	lenght = lenght + ac;
	s = malloc(sizeof(char) * (lenght + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		if (s[z] == '\0')
			s[z++] = '\n';
	}
	return (s);
}
