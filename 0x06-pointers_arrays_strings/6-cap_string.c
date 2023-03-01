#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize its words
 *
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char a = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == str[i - 1])
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
