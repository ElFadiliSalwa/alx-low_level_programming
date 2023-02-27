#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: the string to print its half
 */
void puts_half(char *str)
{
	int i = (_strlen(str) - 1) / 2 + 1;

	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
