#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initialize it
 * @size: the size of the array
 * @c: the char to initialize
 * Return: a pointer to the created array, or NULl
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
