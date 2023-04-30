#include "lists.h"

/**
 * print_list - Print list element
 * @h: pointer
 * Return: The number of element
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
		}
		else
			printf("[%u]%s\n", h->len, h->str);
		s++;
		h = h->next;
	}
	return (s);
}
