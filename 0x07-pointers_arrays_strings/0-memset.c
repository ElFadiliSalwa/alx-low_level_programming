#include <stdio.h>

/**
 * _memset - fills the memory with a constant byte
 * @s: char
 * @b: the constant
 * @n: memory's nuber of bytes to be filled
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
