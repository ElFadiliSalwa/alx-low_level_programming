#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to a string
 *
 * Return: pointer to a string
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0, j = 0;

	if (!str)
		return (NULL);

	while (str[i)
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (!copy)
		return (NULL);

	while (j <= i)
	{
		copy[j] = str[j];
		j++;
	}
	return (copy);
}
