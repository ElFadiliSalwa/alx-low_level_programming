#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the character
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
