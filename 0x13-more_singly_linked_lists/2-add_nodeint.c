#include "lists.h"

/**
 * add_nodeint - Add node at start of list
 * @head: - points to first node
 * @n: - value to be stored in node
 * Return: - Address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
