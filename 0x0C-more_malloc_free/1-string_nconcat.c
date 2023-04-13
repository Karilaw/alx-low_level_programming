#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length
 * @s: The string to measure
 * Return: Length of s
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == 0)
	{
		return (0);
	}
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * _strcpy - Copies a string to another buffer
 * @dest: The destination buffer
 * @src: The source string
 * Return: A pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (src == NULL)
	{
		return (dest);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * string_nconcat - Concatenates strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to copy from s2
 * Return: A pointer to a new string that contains s1 and n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *prt;
	unsigned int len1, len2, i;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	prt = malloc(sizeof(char) * (len1 + n + 1));
	if (prt == NULL)
	{
		return (NULL);
	}
	prt = _strcpy(prt, s1);
	for (i = 0; i < n; i++)
	{
		prt[len1 + i] = s2[i];
	}
	prt[len1 + i] = '\0';
	return (prt);
}
