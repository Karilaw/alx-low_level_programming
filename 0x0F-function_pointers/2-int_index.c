#include "function_pointers.h"

/**
 * int_index - searchs integer
 * @array: array to search from
 * @size: size of array
 * @cmp: comparison function
 * Return: integer i if success -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
