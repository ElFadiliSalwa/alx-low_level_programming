#include "main.h"
#include <ctype.h>
/**
* _islower - checks for lowercase
*'c': the character to be checked
*
* Return:1 or 0
*/
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	return (0);
}
