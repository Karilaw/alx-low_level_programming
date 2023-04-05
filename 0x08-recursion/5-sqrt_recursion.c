#include "main.h"

int the_root(int n, int i);

/**
 * _sqrt_recursion - returns sqr root
 * @n: number
 * Return: natural square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (the_root(n, 0));
}
/**
 * the_root - finds sqr root
 * @n: number
 * @i: iterator
 *
 * Return: natural square root of n or -1
 */
int the_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (the_root(n, i + 1));
}
