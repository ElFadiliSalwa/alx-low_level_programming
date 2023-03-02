#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: the string to be encoded
 *
 * Return: char
 */
char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[j] == str[i])
				str[i] = b[j];
		}
	}
}
