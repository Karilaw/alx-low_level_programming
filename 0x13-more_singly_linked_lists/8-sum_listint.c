#include "lists.h"

/**
 * sum_listint - returns the sum of all values
 * @head: pointer to the head
 * Return: sum of nodes otherwise 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
