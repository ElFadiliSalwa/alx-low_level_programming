#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	char h, m;

	for (h = 0; h < 24; h++)
	{
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(':');
		for (m = 0; m < 60; m++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
