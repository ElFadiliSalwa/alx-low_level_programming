#include<stdio.h>
/**
 * main - Fibonacci
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, j = 1, k = 2, l, m, n, o;

	printf("%lu", j);
	for (i= 1; i < 91; i++)
	{
		printf(", %lu", k);
		k += j;
		j = k - j;
	}
	l = j / 1000000000;
	m = j % 1000000000;
	n = k / 1000000000;
	o = k % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", n + (o / 1000000000));
		printf("%lu", o % 1000000000);
		n += l;
		l = n - l;
		o += m;
		m = o - m;
	}
	printf("\n");
	return (0);
}
