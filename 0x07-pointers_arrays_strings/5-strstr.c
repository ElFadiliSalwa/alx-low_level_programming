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
	while (*haystack)
	{
		while (*needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
