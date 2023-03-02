#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: the string to be encoded
 *
 * Return: char
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		if (str[i] == 'e' || str[i] == 'E')
                        str[i] = '3';
		if (str[i] == 'o' || str[i] == 'O')
                        str[i] = '0';
		if (str[i] == 't' || str[i] == 'T')
                        str[i] = '7';
		if (str[i] == 'l' || str[i] == 'L')
                        str[i] = '1';
		i++;
	}
	return (str);
}
