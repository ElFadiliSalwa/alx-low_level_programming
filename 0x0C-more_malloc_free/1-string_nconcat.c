#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the secondd string
 * @n: the number of bytes to concatenate
 *
 * Return: pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, s1_len = 0, s2_len = 0;

	while (s1 && s1[s1_len])
		s1_len++;

	while (s2 && s2[s2_len])
		s2_len++;

	if(n < s2_len)
		s = malloc(sizeof(char) * (s1_len + n + 1));
	else
		s = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (!s)
		return (NULL);

	while (i < s1_len)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < s2_len && i < (s1_len + n))
		s[i++] = s2[j++];

	while (n >= s2_len && i < (s1_len + s2_len))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
