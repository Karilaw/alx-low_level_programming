#include <stdio.h>

/**
 * main - counts the number of args
 * @argc: number of args
 * @argv: array of args
 * Return: Return 0 if success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
