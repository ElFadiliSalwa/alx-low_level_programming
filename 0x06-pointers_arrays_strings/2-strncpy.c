#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @n: the number of characters to be copied
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}