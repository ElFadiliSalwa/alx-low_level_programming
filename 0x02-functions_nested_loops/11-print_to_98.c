#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a line
 * @n: starting from n
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("98");
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
