#ifndef FIZZ_BUZZ_H
#define FIZZ_BUZZ_H

#include <stdio.h>

/* fizz_buzz.c - A program that prints Fizz Buzz */
/**
 * main - Prints Fizz Buzz from 1 to 100
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

#endif /* FIZZ_BUZZ_H */
