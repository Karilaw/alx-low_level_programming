#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Matches a byte to the first occurence in s
 * @s: String to search
 * @accept: The byte to match
 * Return: A pointer to the byte in s or NULL if no byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *i = s;

	while (*i != '\0')
	{
		char *j = accept;

		while (*j != '\0')
		{
			if (*i == *j)
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
