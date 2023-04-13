#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes,for ptr
 * @new_size: new size, in bytes, of the new block
 * Return: pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = realloc(ptr, new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (new_ptr);
}
