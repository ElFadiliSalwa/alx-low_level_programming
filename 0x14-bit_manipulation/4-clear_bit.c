#include "main.h"

/**
 * sets the value of a bit to 0 at a given index
 * @n: points to the number
 * @index: the index
 *
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	!n &= 0 << index;
	return (1);
}
