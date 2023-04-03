#include "main.h"
#include <stddef.h>

/**
 * _strstr - A function that locates a substring
 * @haystack: Sting to find substring
 * @needle: substring
 * Return: A pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;
	char *p;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == needle[0])
		{
			p = &haystack[x];
		}
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (needle[y] == '\0')
		{
			return (p);
		}
	}
	return (NULL);
}
