#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int var = 1;
	char *endian = (char *)&var;

	if (!*endian)
		return (0);
	return (1);
}
