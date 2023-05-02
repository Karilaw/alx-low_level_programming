#include "lists.h"

/**
 * delete_nodeint_at_index - delete data at particular index
 * @head: pointer to a pointer to first node
 * @index: position to be deleated
 * Return: Return 1 if sucessful -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next;
	unsigned int i;

	if (!*head)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;
	free(temp->next);
	temp->next = next;

	return (1);
}
