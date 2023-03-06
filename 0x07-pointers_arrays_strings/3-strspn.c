#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char
 * @accept: pointer to char
 *
 * Return:int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 1;

	while (*s != '\0')
	{
		if (*accept != *s)
			n++;
		else
			break;
		s++;
	}
	return (n);
}
