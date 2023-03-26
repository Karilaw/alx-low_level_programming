#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0 on success
 */

int main(void)
{
	long n = 612852475143;
	long i = 2;
	long max = 0;

	while (i <= sqrt(n))
	{
		if (n % i == 0)
		{
			n /= i;
			if (i > max)
				max = i;
		}
		else
			i++;
	}
	if (n > max)
		max = n;
	printf("%ld\n", max);
	return (0);
}
