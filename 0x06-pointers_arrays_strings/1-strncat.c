#include "main.h"
/**
 * _strncat - conatenates two strings
 * @dest: the destination
 * @src: the source
 * @n: the number of characters
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[strlen(dest)] = src[i];
	dest[strlen(dest)] = '\0';
	return (dest);
}
