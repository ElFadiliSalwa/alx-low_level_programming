#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i, j = _strlen(s) - 1;
	char intermediaire;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		while (j > i)
		{
			intermediaire = s[j];
			s[j] = s[i];
			s[i] = intermediaire;
			j--;
		}
	}
}
