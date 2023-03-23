#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, char);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ap, char));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
