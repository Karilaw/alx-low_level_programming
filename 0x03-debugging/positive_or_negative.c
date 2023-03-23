#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * positive_or_negative - A fuction to check posive
 * @n: The number to check
 * Return: Always 0 (Success)
*/
void positive_or_negative(int n)
{
/* your code goes there */
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
}
