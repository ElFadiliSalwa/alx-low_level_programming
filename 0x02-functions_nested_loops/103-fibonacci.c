#include<stdio.h>
/**
 * main - Fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j = 1, k = 2, next, sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
			sum += j;
		next = j + k;
		j = k;
		k = next;
	}
	printf("%d\n", sum);
	return (0);
}
