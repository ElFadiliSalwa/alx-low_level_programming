#include "main.h"

/**
 * main - prints the largest prime factor of the number
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	int div = 2, max;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			max = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld", max);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
