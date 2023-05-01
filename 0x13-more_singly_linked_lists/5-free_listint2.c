#include "lists.h"

/**
 * free_listint2 - frees list and sets the head to NULL
 * @head: pointer to pointer to the first node of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
