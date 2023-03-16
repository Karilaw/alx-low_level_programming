#include  <stdio.h>
/**
 * main - A C program.
 * Return: 0
 */
int main(void)
{
	printf("Size char: %lu byte(s)\n", sizeof(char));
	printf("Size int: %lu byte(s)\n", sizeof(int));
	printf("Size long int: %lu byte(s)\n", sizeof(long int));
	printf("Size long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size float: %lu byte(s)\n", sizeof(float));

	return (0);
}
