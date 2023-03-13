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
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	t = malloc(size);
	
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = c;
		i++;
	}

	return (t);
}
