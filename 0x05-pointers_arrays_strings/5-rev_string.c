#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j = _strlen(s) - 1;
	char intermediaire;

	while (i < j)
	{
		intermediaire = s[i];
		s[i] = s[j];
		s[j] = intermediaire;
		i++;
		j--;
	}
}
