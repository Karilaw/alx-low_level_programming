#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	/* code goes here */
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
