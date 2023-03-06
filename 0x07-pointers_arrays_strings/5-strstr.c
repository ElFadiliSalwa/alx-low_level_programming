#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be scanned
 * @needle: the string to be searched within haystack
 * 
 * Return: pointer to char
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		while (*n && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (haystack);
	}
	return ('\0');
}
