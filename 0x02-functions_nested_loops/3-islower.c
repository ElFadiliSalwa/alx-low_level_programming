#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the character 'c' given in parameter is in lowercase
 * 
 * Return:1 or 0
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	return (0);
}
