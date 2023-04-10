#include <stdio.h>
/**
 * main - A program that prints its name
 * @argc: number of command line arguments
 * @argv: array of strings of command line arguments
 * Return: prints its name, followed by a new line
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
