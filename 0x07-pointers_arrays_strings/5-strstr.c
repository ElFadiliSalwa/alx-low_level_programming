#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be scanned
 * @needle: the string to be searched
 * 
 * Return: pointer to char
 */

char *_strstr(char *haystack, char *needle)
{
	char *tmp_h, *tmp_n;

	while (*haystack)
	{
		tmp_h = haystack;
		tmp_n = needle;
		while (*tmp_n && *haystack == *tmp_n)
		{
			haystack++;
			tmp_n++;
		}
		if (!*tmp_n)
			return (tmp_h);
		haystack++;
	}
	return ('\0');
}
