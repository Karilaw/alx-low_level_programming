#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *p;

	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		for (; *p != '\0'; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
