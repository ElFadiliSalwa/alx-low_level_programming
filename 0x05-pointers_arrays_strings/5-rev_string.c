#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i;
	char intermediaire[_strlen(s)];

	for (i = _strlen(s) - 1; i >= 0; i--)
		intermediaire[i] = s[i];
}
