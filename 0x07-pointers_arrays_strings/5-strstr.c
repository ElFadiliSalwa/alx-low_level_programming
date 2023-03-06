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
	char *tmp_haystack;
	char *tmp_needle;

	while (*haystack)
	{
		tmp_haystack = haystack;
		tmp_needle = needle;
		while (*tmp_needle && *haystack == *tmp_needle)
		{
			haystack++;
			tmp_needle++;
		}
		if (!*tmp_needle)
			return (tmp_haystack);
		haystack++;
	}
	return ('\0');
}
