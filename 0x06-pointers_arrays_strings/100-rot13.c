#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @str: the string to encode
 *
 * Return: char
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
				str[i] += 13;
			else
				str[i] -= 13;
			i++;
		}
		i++;
	}
	return (str);
}
