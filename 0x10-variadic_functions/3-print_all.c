#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, test;
	char *s;

	va_start(ap, format);
	while (format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				test = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				test = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				test = 1;
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				test = 1;
				break;
			default:
				test = 0;
				break;
		}
		if (format[i + 1] != '\0' && test == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
