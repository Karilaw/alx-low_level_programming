#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: array of argument values
 * Return: 0 (Success) 1 (Fails)
 */

int main(int argc, char *argv[])
{
	int cents, count, size, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	count = 0;
	size = sizeof(coins) / sizeof(int);
	for (i = 0; i < size; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
