#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *prt;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	prt = malloc(nmemb * size);
	if (prt == NULL)
	{
		return (NULL);
	}
	memset(prt, 0, nmemb * size);
	return (prt);
}
