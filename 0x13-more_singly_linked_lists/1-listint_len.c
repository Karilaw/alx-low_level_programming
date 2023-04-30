#include "lists.h"

/**
 * listint_len - returns the number of values in the list
 * @h: pointer to head of list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
