#include "main.h"
/**
 * times_table - prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (p >= 10)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(p + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
