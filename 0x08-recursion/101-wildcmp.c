#include "main.h"

/**
 * wildcmp - Returns 1 if the strings are identical  otherwise 0
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
