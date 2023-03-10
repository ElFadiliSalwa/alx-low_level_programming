#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: the string we want to calculate its length
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s)
	{
		counter++;
		s++;
		counter += _strlen_recursion(s);
	}

	return (counter);
}
