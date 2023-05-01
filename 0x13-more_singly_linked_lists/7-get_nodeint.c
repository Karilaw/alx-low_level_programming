#include "lists.h"

/**
 * get_nodeint_at_index - returns the last element
 * @head: pointer to the head of the list
 * @index: index of the node to return
 * Return: pointer to the nth node otherwise  NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
