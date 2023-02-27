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

	for (i = 0; i < _strlen(s) -1; i++)
	{
		for (j = _strlen(s) - 1; j > i; j--)
		{
			intermediaire = s[i];
			s[i] = s[j];
			s[j] = intermediaire;
		}
	}
}
