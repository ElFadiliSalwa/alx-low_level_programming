#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: the string to be changed
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		toupper(str[i]);
		i++;
	}
	return (str);
}
