#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to int to set
 * @index: index to check
 * Return: Return 1 if success 0 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}