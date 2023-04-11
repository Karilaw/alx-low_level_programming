#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *array_str;
	int len1 = 0, len2 = 0, i;

	if (s1 != NULL)
	{
		while (s1[len1])
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2])
		{
			len2++;
		}
	}
	array_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (array_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		array_str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		array_str[len1 + i] = s2[i];
	}
	array_str[len1 + len2] = '\0';
	return (array_str);
}
