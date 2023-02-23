#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: the number of times to print the character _
 *
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(i + '0');
		_putchar('\n');
	}
}
