#include <stdio.h>

/*
 * main - A program that prints number of args
 * @argc: Holds the number of args
 * @argv: Array of string of parameters
 * Return: Total number of args passed
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
