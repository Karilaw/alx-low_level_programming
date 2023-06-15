#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: double pointer to head list
 * @n: data for new node
 * Return: address of new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node = NULL;
	if (*head == NULL)
	{
		new_node = NULL;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
