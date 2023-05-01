#include "lists.h"

/**
 * pop_listint - deletes the head node in a list
 * @head: pointer to pointer to the first node
 * Return: head node's, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;

	*head = (*head)->next;

	free(temp);
	return (n);
}
