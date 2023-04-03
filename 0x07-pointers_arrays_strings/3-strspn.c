#include "main.h"

/**
 * _strspn - Get the lengt of prefix in substrings
 * @s: The string
 * @accept: The length to match
 * Return: The length of prefix substrings
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int x, y, counter;

	counter = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				counter++;
				break;
			}
		}
		if (accept[y] == '\0')
		{
			break;
		}
	}
	return (counter);
}
