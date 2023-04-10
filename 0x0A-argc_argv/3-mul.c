#include <stdio.h>
#include <stdlib.h>

/**
 * main- A fuction that multiplies 2 numbers
 * @argc: Stores the number of args
 * @argv: Array with string of args
 * Return: Product of 2 numbers
 */

int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	return (0);
}
