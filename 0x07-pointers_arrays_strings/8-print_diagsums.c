#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: two dimensional array of integers
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
		}
	}
	printf("%d, ", sum1);
	for (i = size - 1; i >= 0; i--)
	{
		for (j = size -1; j >= 0; j--)
		{
			if (i == j)
				sum2 += a[i][j];
		}
	}
	printf("%d\n", sum2);
}
