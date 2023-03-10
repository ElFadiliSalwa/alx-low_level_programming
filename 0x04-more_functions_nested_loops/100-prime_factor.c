#include<stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143, div = 2, max = 0;

	while (n != 1)
	{
		if (n % div == 0)
		{
			n /= div;
			max = div;
		}
		div += 1;
	}
	printf("%ld\n", max);
	return (0);
}
