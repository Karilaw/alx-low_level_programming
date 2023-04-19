#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: an array of functions
 * @size: size of array
 * @action: a fuction pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
