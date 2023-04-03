#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum
 * @a: pointer to matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int x, sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;

	for (x = 0; x < size; x++)
	{
		sum_1 += a[x * size + x];
		sum_2 += a[x * size + (size -1 -x)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
