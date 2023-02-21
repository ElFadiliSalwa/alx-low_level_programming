#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character c given in parameter
 * 
 * Return: 1 if lowercase, else 0
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	return (0);
}
