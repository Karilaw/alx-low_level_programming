#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *the_str;
	char *separator = "";

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 1:
				{
				printf("%s%c", separator, va_arg(args, int));;
				break;
				}
			case 2:
				{
					printf("%s%d", separator, va_arg(args, int));
					break;
				}
			case 3:
				{
					printf("%s%f", separator, va_arg(args, double));
					break;
				}
			case 4:
				{
					the_str = va_arg(args, char *);
					if (the_str == NULL)
					{
						the_str = "(nil)";
					}
					printf("%s%s", separator, the_str);
					break;
				}
			default:
				i++;
				continue;
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
