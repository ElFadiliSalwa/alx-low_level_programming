#include "main.h"
#include<ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
