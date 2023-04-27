#include "lists.h"

/**
 * add_node - adds a new node at the begining
 * @head: pointer to a pointer to the head
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
