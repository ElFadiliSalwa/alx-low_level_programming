#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination
 * @src: the source
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; i <= strlen(src); i++)
		dest[strlen(dest)] = src[i];
	dest[strlen(dest)] = '\0';
	return (dest);
}
