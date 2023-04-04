#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: Pointer to be changed
 * @to: To be assigned
 * Return: Void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
