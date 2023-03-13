#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to a char
 */

char *str_concat(char *s1, char *s2)
{
	char *temp;
	unsigned int i, j, k, l;

	if (!s1)
		s1 = "";
	
	if (!s2)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	temp = malloc(sizeof(char) * (i + j + 1));
	if (!temp)
		return (NULL);

	for ( k = 0; k < i; k++)
		temp[k] = s1[k];
	l = j;
	for (j = 0; j <= l; k++, j++)
		temp[k] = s2[j];

	return (temp);
}
