#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(*s); i > 0; i--)
		putchar(s[i]);
	putchar('\n');
}
