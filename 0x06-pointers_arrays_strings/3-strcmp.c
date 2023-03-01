#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
		i++;
        return (s1[i] - s2[i]);
}
