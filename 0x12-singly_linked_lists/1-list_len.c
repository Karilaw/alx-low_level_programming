#include "lists.h"

/**
 * list_len - Return count of linked list
 * @h: Pointer to the head
 * Return: Count
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
