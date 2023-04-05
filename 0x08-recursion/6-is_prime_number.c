#include "main.h"

int find_the_prime(int n, int x);
/**
 * is_prime_number - check prime
 * @n: number
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (find_the_prime(n, n / 2));
}
/**
 * find_the_prime - check prime
 * @n: number
 * @x: iterator
 * Return: 1 if n is prime, 0 if not
 */

int find_the_prime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (find_the_prime(n, x - 1));
}
