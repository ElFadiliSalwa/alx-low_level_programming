#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies the string pointed to
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <  _strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return *dest;
}
