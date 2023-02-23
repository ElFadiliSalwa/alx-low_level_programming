#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int positive;

	positive = n;
	if (n < 0)
	{
		_putchar('-');
		positive = -n;
	}
	if ((positive / 10) != 0)
		print_number(positive / 10);
	_putchar((positive % 10) + '0');
}
