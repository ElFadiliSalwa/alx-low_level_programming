#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a line
 * @n: starting from n
 */
void print_to_98(int n)
{
	int i, one, ten, hundred ;

	if (n == 98)
	{
		one = n % 10;
		ten = n / 10;
		_putchar(ten + '0');
		_putchar(one + '0');
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 10)
				_putchar(i + '0');
			else
			{
				one = i % 10;
				ten = i / 10;
				_putchar(ten + '0');
				_putchar(one + '0');
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
				one = i % 10;
				ten = (i % 100) / 10;
				hundred = i / 100;
				_putchar(hundred + '0');
				_putchar(ten + '0');
				_putchar(one + '0');
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
