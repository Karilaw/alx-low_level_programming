#include <stdio.h>

/**
 * main- A fuction that prints args
 * @argc: Holds number of args
 * @argv: array of passed args
 * Return: Printout of args
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
