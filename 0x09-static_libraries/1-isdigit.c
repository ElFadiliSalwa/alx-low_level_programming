#include "main.h"
#include<ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
