#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a line
 * @n: starting from n
 */
void print_to_98(int n)
{
	int i, ten;

	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
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
			if (i < 10)
				_putchar(i + '0');
			else if (i < 100)
			{
				ten = (i % 100) / 10;
				_putchar(i / 100 + '0');
				_putchar(ten + '0');
				_putchar(i % 10 + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
