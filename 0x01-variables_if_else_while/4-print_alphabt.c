#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	/* Code goes here */
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
