#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusif = n ^ m;
	int nBits = 0;

	while (exclusif)
	{
		nBits++;
		exclusif &= exclusif - 1;
	}
	return (nBits);
}
