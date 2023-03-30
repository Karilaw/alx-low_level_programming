#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = nums[j];
				break;
			}
		}
	}
	return (s);
}
