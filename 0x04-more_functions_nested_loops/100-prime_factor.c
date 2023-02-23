#include<stdio.h>

/**
 * main - prints the largest prime factor of the number
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	int div = 2, max = 0;

	while (n != 1)
	{
		if (n % div != 0)
			div +=  1;
		else
		{
			n /= div;
			max = div;
		}
	}
	printf("%ld\n", max);
	return (0);
}
