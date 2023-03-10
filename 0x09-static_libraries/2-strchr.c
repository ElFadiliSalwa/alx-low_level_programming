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
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
