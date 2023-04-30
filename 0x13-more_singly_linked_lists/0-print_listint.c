#include "lists.h"

/**
 * print_listint - prints values in the list
 * @h: pointer to the node in the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
