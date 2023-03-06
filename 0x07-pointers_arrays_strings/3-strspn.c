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
	unsigned int i = 0, j;
	int n = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				n++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
			break;
		i++;
	}
	return (n);
}
