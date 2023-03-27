#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: a pointer to a char
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
