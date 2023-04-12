#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, len, total;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total += len + 1;
	}
	total++;

	s = malloc(sizeof(char) * total);
	if (s == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[len] = av[i][j];
			len++;
			j++;
		}
		s[len] = '\n';
		len++;
	}
	s[len] = '\0';
	return (s);
}
