#include "function_pointers.h"

/**
 * print_name - pronts a name
 * @name: the name to be printed
 * @f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
