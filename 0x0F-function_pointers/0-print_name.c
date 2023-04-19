#include "function_pointers.h"
/**
 * print_name - Calls a pointer to a function to print name
 * @name: pointer to name to print
 * @f: function that prints name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
