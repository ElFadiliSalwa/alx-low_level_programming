#include "main.h"
#include "2-strlen.c"
#include<ctype.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted to an integer
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, result;

	while (i < _strlen(s))
	{
		if (isdigit(s[i]))
		{
			result = s[i];
			if (s[i - 1] == '-')
				result *= -1;
		}
		i++;
	}
	return (result);
}
