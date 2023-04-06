#include "main.h"
#include <string.h>
/**
 * find_palindrome - Helper function that checks palindrome
 * @s: string to check
 * @x: starting index of
 * @y: ending index
 * Return: 1 if is a palindrome, 0 otherwise
 */
int find_palindrome(char *s, int x, int y)
{
	if (x >= y)
	{
		return (1);
	}
	if (s[x] != s[y])
	{
		return (0);
	}
	return (find_palindrome(s, x  + 1, y - 1));
}
/**
 * is_palindrome - Function that checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (find_palindrome(s, 0, len - 1));
}
