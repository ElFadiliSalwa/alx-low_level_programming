#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char intermediaire;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		for (j = 0; j < _strlen(s); j++)
		{
			intermediaire = s[i];
			s[j] = intermediaire;
		}
	}
}
