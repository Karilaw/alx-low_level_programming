#include "lists.h"

/**
 * print_list - Print list element
 * @h: pointer
 * Return: The number of element
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}
