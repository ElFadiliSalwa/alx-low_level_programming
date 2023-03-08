#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (!*s1 && *s2 == '*' && s2[1])
		return (0);
	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	if (*s2 == '*')
		return (wildcmp(s1, ++s2) || wildcmp(++s1, s2));
	return (0);
}
