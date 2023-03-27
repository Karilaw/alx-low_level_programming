#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password for 101-crackme
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	char password[100];

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	printf("%s\n", password);
	return (0);
}
