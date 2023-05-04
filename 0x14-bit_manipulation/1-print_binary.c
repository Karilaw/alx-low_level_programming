#include "main.h"

/**
 * print_binary - print binary number of int n
 * @n: number to be represented
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
