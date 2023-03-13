#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and initializes an array of chars
 * @size: the size of the array
 * @c: the specific char
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *t;

	if (size == 0)
		return (0);

	else
	{
		t = malloc(size);
		t[0] = c;
		return (t);
	}

	return (0);
}
