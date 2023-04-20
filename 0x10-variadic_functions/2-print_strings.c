#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: number of strings
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *the_str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		the_str = va_arg(args, char *);
		if (the_str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", the_str);
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
