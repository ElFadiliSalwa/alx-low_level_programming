#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the chracter to be located
 *
 * Return: pointer to char
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			for (j = i; s[j] != '\0'; j++)
				tmp = s[j];
			break;
		}
	}
	return (tmp);
}
