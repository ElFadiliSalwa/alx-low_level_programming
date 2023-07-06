#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a binary number
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 1, result = 0, length;
	int i;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{}

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += d;
		d *= 2;
	}
	return (result);
}
