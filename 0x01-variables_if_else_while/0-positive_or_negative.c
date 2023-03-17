#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Positive anything is better than negative nothing
 * Return: number
 */
int main(void)

{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;
	printf("The number %d ", n);
	if (number > 0)
		printf("is positive\n");
	else if (number == 0)
		printf("is zero\n");
	else
		printf("is negative\n");

	return (0);
}
