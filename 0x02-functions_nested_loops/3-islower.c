#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase character
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	return (0);
}
