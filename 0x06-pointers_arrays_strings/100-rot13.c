#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 * Return: a pointer to the encoded string
 */

char *rot13(char *s)
{
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0;
	int j = 0;
	char c;

	while ((c = s[i]) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (c == norm[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
