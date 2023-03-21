#include "main.h"
/**
 * _isalpha -  A function that checks for alphabetic character.
 * Return: 1(Success if a lowercase letter) else 0(otherwise)
 * @c: is valuable representing a lowercase letter
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
