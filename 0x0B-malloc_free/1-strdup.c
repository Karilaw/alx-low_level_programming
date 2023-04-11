#include "main.h"
#include <stdlib.h>

/**
 * _strdup- a function that returns a pointer to a newly allocated space
 * @str: String to duplicate in memory
 * Return: A pointer to the memory
 */

char *_strdup(char *str)
{
	char *new_array;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new_array = malloc((len + 1) * sizeof(char));
	if (new_array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		new_array[i] = str[i];
		i++;
	}
	new_array[len] = '\0';
	return (new_array);
}
