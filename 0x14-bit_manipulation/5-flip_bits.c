#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * @n: first number
 * @m: second number
 * Return: the number of bits you need
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int counter = 0;

	while (xor)
	{
		counter += xor & 1;
		xor >>= 1;
	}
	return (counter);
}
